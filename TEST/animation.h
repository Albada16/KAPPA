#define Logo_width 52
#define Logo_height 52

//正常情況下的河童
static const unsigned char PROGMEM idle [] = {
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x30, 0x0C, 
  0x00, 0x00, 0x00, 0x80, 0xC3, 0x39, 0x8F, 0x01, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0xDF, 0x01, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x03, 0x00, 0x00, 
  0xFF, 0x03, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xFE, 0x07, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xBC, 0xFF, 0xFF, 
  0xBF, 0x01, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0x00, 0xE0, 0xEF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0xF0, 0xEF, 0xFF, 0xFE, 
  0x01, 0x00, 0x00, 0xF0, 0xEF, 0xFF, 0xFE, 0x01, 0x00, 0x00, 0xF0, 0xFF, 
  0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0xF0, 0x3F, 0x80, 0xFF, 0x01, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0xFF, 0x01, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x80, 
  0xFF, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};
static const unsigned char PROGMEM idle2 [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x30, 0x18, 
  0x00, 0x00, 0x00, 0x18, 0xCF, 0x39, 0x1C, 0x00, 0x00, 0x00, 0xB8, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x00, 0xFF, 0x01, 0x00, 0x00, 
  0xFE, 0x01, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0xFE, 0x07, 0x00, 0xFF, 0x03, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xD8, 0xFF, 0xFF, 
  0xDF, 0x03, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xE0, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xF0, 0xF7, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0xF8, 0xF7, 0x7F, 0xFF, 
  0x00, 0x00, 0x00, 0xF8, 0xF7, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0xF8, 0x1F, 0xC0, 0xFF, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x80, 0xFF, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0xC0, 
  0x7F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xE0, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};

//按按鈕時的河童
static const unsigned char PROGMEM acting [] = {
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x30, 0x0C, 
  0x00, 0x00, 0x00, 0x80, 0xC3, 0x39, 0x8F, 0x01, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0xDF, 0x01, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x03, 0x00, 0x00, 
  0xFF, 0x03, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xFE, 0x07, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xBC, 0xFF, 0xFF, 
  0xBF, 0x01, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0xE7, 0xFF, 0xFC, 0x00, 0x00, 
  0x00, 0xE0, 0xDB, 0x7F, 0xFB, 0x00, 0x00, 0x00, 0xF0, 0xDB, 0x7F, 0xFB, 
  0x01, 0x00, 0x00, 0xF0, 0xDB, 0x7F, 0xFB, 0x01, 0x00, 0x00, 0xF0, 0xE7, 
  0xFF, 0xFC, 0x01, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0xF0, 0x3F, 0x80, 0xFF, 0x01, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0xFF, 0x01, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x80, 
  0xFF, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};

//兩個流汗河童，1跟2一直交換
static const unsigned char PROGMEM acting1 [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x30, 0x0C, 
  0x00, 0x00, 0x00, 0x80, 0xC3, 0x39, 0x8F, 0x01, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0xDF, 0x01, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x03, 0x00, 0x00, 
  0xFF, 0x03, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xFE, 0x07, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xBC, 0xFF, 0xFF, 
  0xBF, 0x01, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0xE7, 0xFF, 0xFC, 0x00, 0x00, 
  0x00, 0xE0, 0xC3, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0xF0, 0xC3, 0x7F, 0xF8, 
  0x01, 0x00, 0x00, 0xF0, 0xC3, 0x7F, 0xF8, 0x01, 0x00, 0x00, 0xF0, 0xE7, 
  0xFF, 0xDC, 0x01, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xDF, 0x01, 0x00, 0x00, 
  0x70, 0x3E, 0x80, 0xDF, 0x01, 0x00, 0x00, 0x70, 0x1E, 0x00, 0xFF, 0x01, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x80, 
  0xFF, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x3B, 0x00, 0x00, 
  0x00, 0x00, 0xF9, 0xFF, 0x13, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM acting2 [] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x30, 0x0C, 
  0x00, 0x00, 0x00, 0x80, 0xC3, 0x39, 0x8F, 0x01, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0xDF, 0x01, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x03, 0x00, 0x00, 
  0xFF, 0x03, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xFE, 0x07, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xBC, 0xFE, 0xFF, 
  0xBF, 0x01, 0x00, 0x00, 0xC0, 0xFE, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFE, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0xE7, 0xFF, 0x7C, 0x00, 0x00, 
  0x00, 0xE0, 0xC3, 0x5F, 0x78, 0x00, 0x00, 0x00, 0xF0, 0xC3, 0x7F, 0x78, 
  0x01, 0x00, 0x00, 0xF0, 0xC3, 0x7F, 0xF8, 0x01, 0x00, 0x00, 0xF0, 0xE7, 
  0xFF, 0xFC, 0x01, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 
  0xF0, 0x3F, 0x80, 0xFF, 0x01, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0xFF, 0x01, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x80, 
  0xDF, 0x00, 0x00, 0x00, 0xC0, 0xFE, 0xFF, 0x4F, 0x00, 0x00, 0x00, 0xC0, 
  0xFC, 0xFF, 0x4F, 0x00, 0x00, 0x00, 0x80, 0xFC, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0xF8, 0x7F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};

//計時暫停的河童，兩個表情交換
static const unsigned char PROGMEM finish1 [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x30, 0x0C, 
  0x00, 0x00, 0x00, 0x80, 0xC3, 0x39, 0x8F, 0x01, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0xDF, 0x01, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x03, 0x00, 0x00, 
  0xFF, 0x03, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xFE, 0x07, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xBC, 0xCF, 0xCF, 
  0xBF, 0x01, 0x00, 0x00, 0xC0, 0xEF, 0x9F, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xE3, 0x7F, 0x70, 0x00, 0x00, 0x00, 0x60, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
  0x01, 0x00, 0x00, 0xF0, 0x81, 0x3F, 0xF0, 0x01, 0x00, 0x00, 0xB0, 0xFF, 
  0xFF, 0xAF, 0x01, 0x00, 0x00, 0x50, 0xFD, 0xFF, 0x4B, 0x01, 0x00, 0x00, 
  0x60, 0x3D, 0x80, 0xDB, 0x00, 0x00, 0x00, 0xB0, 0x1C, 0x00, 0xB7, 0x01, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x80, 
  0xFF, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM finish2 [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x30, 0x18, 
  0x00, 0x00, 0x00, 0x18, 0xCF, 0x39, 0x1C, 0x00, 0x00, 0x00, 0xB8, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x00, 0xFF, 0x01, 0x00, 0x00, 
  0xFE, 0x01, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0xFE, 0x07, 0x00, 0xFF, 0x03, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xD8, 0x3F, 0x3F, 
  0xDF, 0x03, 0x00, 0x00, 0xE0, 0x9F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0xE0, 
  0xE0, 0x7F, 0x3C, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x63, 0x00, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 
  0x00, 0x00, 0x00, 0xF8, 0xC0, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x58, 0xFF, 
  0xFF, 0xDF, 0x00, 0x00, 0x00, 0x28, 0xFD, 0xFF, 0xAB, 0x00, 0x00, 0x00, 
  0xB0, 0x1D, 0xC0, 0x6B, 0x00, 0x00, 0x00, 0xD8, 0xEE, 0xBF, 0xD3, 0x00, 
  0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0xC0, 
  0x7F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xE0, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};
static const unsigned char PROGMEM* idle_c[2] = { idle, idle2};
static const unsigned char PROGMEM* acting_c[2] = { acting1, acting2};
static const unsigned char PROGMEM* finish_c[2] = { finish1, finish2};
