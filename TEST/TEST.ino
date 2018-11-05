#include <Wire.h>
#include "SSD1306Wire.h"
#include <SPI.h>
#include "animation.h"
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
const char* ssid = "ABC";
const char* password = "OAO3425527";
String website;
WebServer server(80);

int BT=23;
int BTN=2;
int L1=32;
int L2=33;
int BSi=1;
int flag=2;
int btnc=0;
int C=0;
int im=0;
int tm=0;
int is=0;
int ts=0;
char CC =':';
int kappa=3;
int A=0;

SSD1306Wire display(0x3c, 21, 22);
void buildWeb(){
  website += "<html>";
  website += "<head>\n";
  website += "<meta charset='UTF-8'>\n";
  website += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
  website += "<title>KAPPA</title>\n";
  website += " <style>";
  website += " html { background-color: white;}";
  website += ".title { text-align: center; color: #00b5d1; font-family: Arial; margin: 100px;}";
  website += "a { font-family: Arial; display:block; text-decoration: none; background-color: black; width: 150px; text-align: center; margin: 0 auto; margin-bottom: 30px; font-size: 2em;}";
  website += ".btn1 { background-color: white; color: #00b5d1; border: 2px solid #00b5d1; border-radius:50px; transition: all 0.3s; }";
  website += ".btn2 { background-color: white; color: #00b5d1; border: 2px solid #00b5d1; border-radius:50px; transition: all 0.3s; }";
  website += " .btn1:hover{ background-color: #00b5d1; color:#ffff;}";
  website += ".btn2:hover{ background-color: #00b5d1; color:#ffff;}";
  website += "</style>";
  website += "</head>\n";
  website += "<body>";
  website += "<h1 class=\"title\">KAPPA</h1>";
  website += "<a class=\"btn1\" href=\"/H\">STAR</a>";
  website += "<a class=\"btn2\" href=\"/L\">STOP</a>";
  website += "</body></html>";
}

void handleRoot() {
  server.send(200, "text/html", website);
}

void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

void ledon() {
  flag=1;
  server.send(200, "text/html", website);
  }

  void ledoff() {
      flag=0;
  server.send(200, "text/html", website);
  }

void setup() {
  Serial.begin(115200);
   pinMode(L1,OUTPUT);
   pinMode(L2,OUTPUT);
   display.init(); 
   display.setFont(ArialMT_Plain_24);
   display.setContrast(255);
   display.flipScreenVertically();
    Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");
  // Wait for connection
  buildWeb();
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp32")) {
    Serial.println("MDNS responder started");
  }

  server.on("/H", ledon);
  server.on("/L", ledoff);
  server.on("/", handleRoot);
  server.on("/inline", []() {
    server.send(200, "text/plain", "this works as well");
  });

  server.onNotFound(handleNotFound);

  server.begin();
  Serial.println("HTTP server started");
}//setup

void loop() {
  if(flag==2){
    for(int i=0;i<2;i++){
            display.clear();
            display.drawXbm(35,0,Logo_width,Logo_height,idle_c[i]);
            display.drawString(25,40,String(tm));
            display.drawString(40,40,String(im));
            display.drawString(60,40,String(CC));
            display.drawString(75,40,String(ts));
            display.drawString(90,40,String(is));
            display.display();
            Serial.println("O");
            delay(1000);
    }

  } 
  if(flag==1){
        //開始計時、叫聲、圖片
      if(kappa==3){
        display.clear();
        display.drawXbm(35,0,Logo_width,Logo_height,acting);
        display.display();
        delay(500);
      }
      kappa=0;
      display.clear();
      display.drawString(25,40,String(tm));
      display.drawString(40,40,String(im));
      display.drawString(60,40,String(CC));
      display.drawString(75,40,String(ts));
      display.drawString(90,40,String(is));
      display.drawXbm(35,0,Logo_width,Logo_height,acting_c[A]);
      display.display();
      is++;
      if(is==9){
        ts++;
        is=0;
      }
      
      if(ts==6){
        im++;
        ts=0;
      }
      if(im==9){
        tm++;
        im=0;
      }
      if(tm==6){
         display.clear();
      display.drawString(25,40,String("ERROR"));
      display.display();
      }
      
      Serial.println("C");
      A++;
        delay(1000);
    }
    if(flag==0){
      //暫停、發光、圖片
      kappa=0;
      digitalWrite(L1,HIGH);
      digitalWrite(L2,HIGH);
       display.clear();
      display.drawString(25,40,String(tm));
      display.drawString(40,40,String(im));
      display.drawString(60,40,String(CC));
      display.drawString(75,40,String(ts));
      display.drawString(90,40,String(is));
      display.drawXbm(35,0,Logo_width,Logo_height,finish_c[A]);
      display.display();
      Serial.println("B");
      delay(500);
      A++;
      C++;
      if(C==5){
        BSi=1;
        C=0;
        tm=im=ts=is=0;
        flag=2;
      }
     }
   digitalWrite(L1,LOW);
   digitalWrite(L2,LOW);
  Serial.println("X");
  if(A==2){
    A=0;
  }
 server.handleClient();
}
