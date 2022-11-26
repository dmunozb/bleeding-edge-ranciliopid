#define status_icon_width 22
#define status_icon_height 18

static const unsigned char blynk_not_ok_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x0c, 0xfc, 0x0c, 0x0c, 0xfc, 0x0c, 0xcc, 0xf3, 0x0c, 0xcc, 0xf3, 0x0c,
   0x0c, 0xfc, 0x0c, 0x0c, 0xfc, 0x0c, 0xcc, 0xf3, 0x0f, 0xcc, 0xf3, 0x0f,
   0x0c, 0xfc, 0x0c, 0x0c, 0xfc, 0x0c, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static const unsigned char wifi_not_ok_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x0c, 0xfc, 0x0c, 0x0c, 0xfc, 0x0c, 0xfc, 0xf3, 0x0c, 0xfc, 0xf3, 0x0c,
   0x0c, 0xcf, 0x0c, 0x0c, 0xcf, 0x0c, 0xfc, 0xcc, 0x0f, 0xfc, 0xcc, 0x0f,
   0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };   

static const unsigned char mqtt_not_ok_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0xcc, 0xcf, 0x0c, 0xcc, 0xcf, 0x0c, 0x0c, 0xc3, 0x0c, 0x0c, 0xc3, 0x0c,
   0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xcf, 0x0f, 0xcc, 0xcf, 0x0f,
   0xcc, 0xcf, 0x0c, 0xcc, 0xcf, 0x0c, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
   
static const unsigned char profile_1_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
   0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
   0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static const unsigned char profile_2_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x33, 0x0c, 0x0c, 0x33, 0x0c,
   0x0c, 0x33, 0x0c, 0x0c, 0x33, 0x0c, 0x0c, 0x33, 0x0c, 0x0c, 0x33, 0x0c,
   0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

static const unsigned char profile_3_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c,
   0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c, 0xcc, 0xcc, 0x0c,
   0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x0c, 0xfc, 0xff, 0x0f, 0xfc, 0xff, 0x0f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
