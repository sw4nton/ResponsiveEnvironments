#include <FastLED.h>
#include <NewPing.h>
#define NUM_LEDS 60
#define DATA_PIN 6
#define TRIGGER_PIN  11 
#define ECHO_PIN     12 
#define MAX_DISTANCE 100 

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600); 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  //randomSeed(analogRead(0));
  FastLED.setBrightness(255); 
}

void loop() {
  FastLED.delay(4000);                     
  unsigned int uS = sonar.ping(); .
  Serial.print("Ping: ");
  Serial.print(uS / US_ROUNDTRIP_CM); 
  Serial.println("cm");
  int val = (uS / US_ROUNDTRIP_CM);
  int led = map(val, 0, 100, 0, NUM_LEDS);
  int RandomR = random8(); //random(256);
  int RandomG = random8(); //random(256);
  int RandomB = random8(); //random(256);
  Serial.println(RandomR);
  Serial.println(RandomG);
  Serial.println(RandomB);

  leds[led];
  FastLED.clear();
  { 
    leds[led].red   = RandomR;
    leds[led].green = RandomG;
    leds[led].blue  = RandomB;
  }
  { 
    leds[led+1].red   = (RandomR)/2;
    leds[led+1].green = (RandomG)/2;
    leds[led+1].blue  = (RandomB)/2;
  }
  { 
    leds[led-1].red   = (RandomR)/2;
    leds[led-1].green = (RandomG)/2;
    leds[led-1].blue  = (RandomB)/2;
  }
  { 
    leds[led-2].red   = (RandomR)/3;
    leds[led-2].green = (RandomG)/3;
    leds[led-2].blue  = (RandomB)/3;
  }
  { 
    leds[led+2].red   = (RandomR)/3;
    leds[led+2].green = (RandomG)/3;
    leds[led+2].blue  = (RandomB)/3;
  }
  { 
    leds[led+3].red   = (RandomR)/4;
    leds[led+3].green = (RandomG)/4;
    leds[led+3].blue  = (RandomB)/4;
  }
  { 
    leds[led-3].red   = (RandomR)/4;
    leds[led-3].green = (RandomG)/4;
    leds[led-3].blue  = (RandomB)/4;
  }
  { 
    leds[led+4].red   = (RandomR)/5;
    leds[led+4].green = (RandomG)/5;
    leds[led+4].blue  = (RandomB)/5;
  }
  { 
    leds[led-4].red   = (RandomR)/5;
    leds[led-4].green = (RandomG)/5;
    leds[led-4].blue  = (RandomB)/5;
  }
  { 
    leds[led+5].red   = (RandomR)/6;
    leds[led+5].green = (RandomG)/6;
    leds[led+5].blue  = (RandomB)/6;
  }
  { 
    leds[led-5].red   = (RandomR)/6;
    leds[led-5].green = (RandomG)/6;
    leds[led-5].blue  = (RandomB)/6;
  }
  { 
    leds[led+6].red   = (RandomR)/7;
    leds[led+6].green = (RandomG)/7;
    leds[led+6].blue  = (RandomB)/7;
  }
  { 
    leds[led-6].red   = (RandomR)/7;
    leds[led-6].green = (RandomG)/7;
    leds[led-6].blue  = (RandomB)/7;
  }
  { 
    leds[led+7].red   = (RandomR)/8;
    leds[led+7].green = (RandomG)/8;
    leds[led+7].blue  = (RandomB)/8;
  }
  { 
    leds[led-7].red   = (RandomR)/8;
    leds[led-7].green = (RandomG)/8;
    leds[led-7].blue  = (RandomB)/8;
  }
  FastLED.show();
}


