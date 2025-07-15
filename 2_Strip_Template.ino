//step 13
#define Strip1Length xx //length in pixels of strip 1
#define Strip2Length xx //length in pixels of strip 2


//step 14
#define R 0       //amount of Red in LEDs: 0 is 0%, 255 is 100%
#define G 0       //amount of Green in LEDs: 0 is 0%, 255 is 100%
#define B 255     //amount of Blue in LEDs: 0 is 0%, 255 is 100%


//step 15
#define Brightness 4         // brightness of LEDs








//you do not need to edit any parts of the code below this

//pins of each strip
#define Strip1Pin 12
#define Strip2Pin 11

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip1(Strip1Length, Strip1Pin, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2(Strip2Length, Strip2Pin, NEO_GRB + NEO_KHZ800);
uint16_t color = strip1.Color(R,G,B);
void setup() {
strip1.begin();//begins each strip to be used
strip2.begin();
strip1.setBrightness(Brightness);//sets the brightness of each strip
strip2.setBrightness(Brightness);
strip1.fill(color,0,Strip1Length);//fills the strip with color
strip2.fill(color,0,Strip2Length);
strip1.show();//sends the signals to the strip
strip2.show();
}

void loop() {
delay(10000);//delays for 10 seconds to minimize usage
strip1.fill(color,0,Strip1Length);//fills the strip with color
strip2.fill(color,0,Strip2Length);
strip1.show();//sends the signals again to fix if theres a power surge or outage
strip2.show();
}
