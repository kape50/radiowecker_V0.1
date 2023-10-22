//bitmaps for large numbers and colon every number has 50 x 70 pixles
//(0,1,2,3,4,5,6,7,8,9,0,:)
const unsigned char ziffern_rot PROGMEM [11][3500] = {
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00,
0x00, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x0f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xfc,
0x07, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xf0, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x7f,
0xc0, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x3f, 0xe0, 0x00,
0x00, 0xff, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xfe,
0x00, 0x00, 0x0f, 0xf0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00,
0x0f, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8,
0x00, 0x07, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x07,
0xf8, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00,
0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03,
0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00,
0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xf8,
0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xf8, 0x00, 0x00,
0x03, 0xfc, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x03, 0xfc,
0x00, 0x0f, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07,
0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00,
0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07,
0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xf8, 0x00,
0x07, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc,
0x00, 0x00, 0x0f, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xfe, 0x00, 0x00,
0x0f, 0xf0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x1f, 0xe0,
0x00, 0x01, 0xff, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x3f, 0xc0, 0x00, 0x00,
0xff, 0xc0, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x7f, 0xe0, 0x01, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xf8,
0x03, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe,
0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00,
0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff,
0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0xff, 0x00,
0x00, 0x00, 0x00, 0x3f, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0xff, 0x00, 0x00, 0x00,
0x00, 0x7f, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x78,
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x3f, 0xff,
0xff, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff,
0xf0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00,
0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff,
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00,
0x00, 0x00, 0x1f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc0,
0x07, 0xff, 0x80, 0x00, 0x00, 0xff, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xff,
0xc0, 0x00, 0x00, 0x70, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x40, 0x00, 0x00, 0x7f, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00,
0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01,
0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xff,
0xff, 0xff, 0xf8, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff,
0xf8, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00,
0x00, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00,
0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00,
0x3f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x7f, 0xf0,
0x1f, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x07, 0xff, 0x80, 0x00, 0x00, 0x7e, 0x00, 0x01, 0xff,
0x80, 0x00, 0x00, 0x78, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x60, 0x00, 0x00, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00,
0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe,
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x07,
0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff,
0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x01,
0xf0, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x01, 0xfe, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x01, 0xff, 0xc0,
0x07, 0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00,
0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00,
0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01,
0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfb, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfb, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x07, 0xf3, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf3, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xe3, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc3, 0xfc, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xc3, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x83, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x83,
0xfc, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03, 0xfc, 0x00,
0x00, 0x00, 0x00, 0xfe, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x03, 0xfc, 0x00, 0x00, 0x00,
0x03, 0xfc, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xf8,
0x03, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x03, 0xfc,
0x00, 0x00, 0x00, 0x1f, 0xe0, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x03, 0xfc, 0x00, 0x00,
0x00, 0x3f, 0xc0, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x7f,
0x80, 0x03, 0xfc, 0x00, 0x00, 0x00, 0xff, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x03,
0xfc, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x03, 0xfc, 0x00,
0x00, 0x03, 0xfc, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07,
0xf0, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x0f, 0xe0, 0x00,
0x03, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff,
0xfc, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00,
0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x0f, 0xff,
0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00,
0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x80,
0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00,
0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff,
0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00,
0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x3f,
0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07,
0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x01,
0xc0, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x01, 0xf8, 0x00, 0x03, 0xff, 0x80, 0x00, 0x01, 0xff, 0x00,
0x0f, 0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xfe,
0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00,
0x00, 0x3f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0,
0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xe0, 0x00, 0x00,
0x00, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff,
0xc0, 0x0f, 0xe0, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x03, 0xff, 0xc0,
0x00, 0x00, 0x03, 0xfc, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xfc, 0xff, 0xff, 0xfe, 0x00, 0x00,
0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff,
0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xfe, 0x03, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xf0, 0x00,
0x7f, 0xf0, 0x00, 0x03, 0xff, 0x80, 0x00, 0x3f, 0xf0, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x1f, 0xf8,
0x00, 0x03, 0xfc, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03,
0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x03, 0xfc, 0x00,
0x00, 0x07, 0xfc, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03,
0xfc, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x03, 0xfc, 0x00,
0x01, 0xfe, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x01, 0xfe,
0x00, 0x00, 0x07, 0xf8, 0x00, 0x01, 0xff, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x01, 0xff, 0x00, 0x00,
0x07, 0xf8, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0xff, 0x80, 0x00, 0x0f, 0xf0,
0x00, 0x00, 0xff, 0x80, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x1f, 0xf0, 0x00, 0x00,
0x7f, 0xe0, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x3f, 0xfc,
0x03, 0xff, 0xc0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfc, 0x00, 0x00,
0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00,
0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf8,
0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01,
0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0xff, 0xff,
0xff, 0xff, 0xfc, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff,
0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfc, 0x00,
0x00, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
0x3f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xf0, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xc0,
0x00, 0xff, 0xc0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x3f,
0xe0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x1f, 0xe0, 0x00,
0x01, 0xfe, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xfe,
0x00, 0x00, 0x0f, 0xf0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x01, 0xfe, 0x00, 0x00,
0x1f, 0xe0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x1f, 0xe0,
0x00, 0x00, 0xff, 0x80, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x7f, 0xc0, 0x00, 0x00,
0x7f, 0xc0, 0x00, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xf0, 0x01, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xf8,
0x03, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x1f, 0xf8,
0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff,
0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x1f, 0xff, 0x00,
0x00, 0x00, 0x3f, 0xf8, 0x07, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xe0, 0x01, 0xff, 0xc0, 0x00, 0x00,
0xff, 0xc0, 0x00, 0xff, 0xe0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x01, 0xff, 0x00,
0x00, 0x1f, 0xf0, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x0f,
0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xfc, 0x00,
0x07, 0xf8, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x07, 0xf8,
0x00, 0x00, 0x03, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x07, 0xf8, 0x00, 0x00,
0x07, 0xf8, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x07, 0xf8,
0x00, 0x03, 0xfe, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x03,
0xff, 0x80, 0x00, 0x3f, 0xf0, 0x00, 0x01, 0xff, 0xe0, 0x00, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xfe,
0x1f, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf8, 0x00, 0x00,
0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff,
0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x00,
0x00, 0x00, 0x07, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x1f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x07, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xe0,
0x01, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x7f,
0xe0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x01, 0xff, 0x00, 0x00, 0x1f, 0xe0, 0x00,
0x01, 0xfe, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xfe,
0x00, 0x00, 0x0f, 0xf0, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00,
0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8,
0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03,
0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xfc, 0x00,
0x00, 0x07, 0xfc, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x03,
0xfc, 0x00, 0x01, 0xff, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x01, 0xff, 0x00, 0x00, 0x07, 0xfc, 0x00,
0x01, 0xff, 0x80, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0xff,
0xf0, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff,
0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf3, 0xf8,
0x00, 0x00, 0x03, 0xff, 0xff, 0xc7, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x07, 0xf8, 0x00, 0x00,
0x00, 0x01, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00,
0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80,
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00,
0xc0, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xff,
0xff, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xe0,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00,
0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
};