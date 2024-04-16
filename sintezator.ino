#include <Adafruit_NeoPixel.h>
unsigned long timing_const = 0;
int pix = 360;
Adafruit_NeoPixel strip(pix, 6, NEO_RGB + NEO_KHZ400);
void setup() {
  Serial.begin(9600);
  strip.begin();
  strip.show();
  strip.setBrightness(30);

}

void loop() {

}
void ful_note(int pin_num) {
  unsigned long timing_run = millis();
  for (pin_num; pin_num >= pin_num - 5; pin_num --) {
    strip.setPixelColor(pin_num, 250, 0, 0);
    if (timing_run - timing_const == 250) {
      timing_const = timing_run;
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 1, 250, 0, 0);
    }
  }
  if (timing_run - timing_const == 4000) {
    strip.clear();
  }
  strip.show();
}
void note_2(int pin_num) {
  unsigned long timing_run = millis();
  for (pin_num; pin_num >= pin_num - 5; pin_num --) {
    for (pin_num; pin_num >= pin_num - 1; pin_num --) {
      strip.setPixelColor(pin_num, 250, 0, 0);
      if (timing_run - timing_const == 250) {
        timing_run = timing_const;
        strip.setPixelColor(pin_num - 1, 250, 0, 0);
      }
    }
    if (timing_run - timing_const == 250) {
      timing_run = timing_const;
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 2, 250, 0, 0);
    }
  }
  if (timing_run - timing_const == 2000) {
    timing_run = timing_const;
    strip.clear();
  }
  strip.show();
}
void note_4(int pin_num) {
  unsigned long timing_run = millis();
  for (pin_num; pin_num >= pin_num - 5; pin_num --) {
    for (pin_num; pin_num >= pin_num - 2; pin_num --) {
      strip.setPixelColor(pin_num, 250, 0, 0);
      if (timing_run - timing_const == 250) {
        timing_run = timing_const;
        strip.setPixelColor(pin_num - 1, 250, 0, 0);
      }
    }
    if (timing_run - timing_const == 250) {
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 3, 250, 0, 0);
    }
  }
  if (timing_run - timing_const == 1000) {
    timing_run = timing_const;
    strip.clear();
  }
  strip.show();
}
void note_8(int pin_num) {
  unsigned long timing_run = millis();
  for (pin_num; pin_num >= pin_num - 5; pin_num --) {
    for (pin_num; pin_num >= pin_num - 3; pin_num --) {
      strip.setPixelColor(pin_num, 250, 0, 0);
      if (timing_run - timing_const == 250) {
        timing_run = timing_const;
        strip.setPixelColor(pin_num - 1, 250, 0, 0);
      }
    }
    if (timing_run - timing_const == 250) {
      timing_run = timing_const;
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 4, 250, 0, 0);
    }
  }
  if (timing_run - timing_const == 500) {
    strip.clear();
  }
  strip.show();
}
void note_16(int pin_num) {
  unsigned long timing_run = millis();
  for (pin_num; pin_num >= pin_num - 5; pin_num --) {
    for (pin_num; pin_num >= pin_num - 4; pin_num --) {
      strip.setPixelColor(pin_num, 250, 0, 0);
      if (timing_run - timing_const == 250) {
        timing_run = timing_const;
        strip.setPixelColor(pin_num - 1, 250, 0, 0);
      }
    }
    if (timing_run - timing_const == 250) {
      timing_run = timing_const;
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 5, 250, 0, 0);
    }
  }
  if (timing_run - timing_const == 250) {
    strip.clear();
  }
  strip.show();
}
void note_32(int pin_num){
  unsigned long timing_run = millis();
  for (pin_num; pin_num >= pin_num - 5;pin_num --){
    strip.setPixelColor(pin_num,250,0,0);
    if (timing_run - timing_const == 250){
      timing_run = timing_const;
      strip.setPixelColor(pin_num - 1, 250,0,0);
    }
  }
  if (timing_run - timing_const == 125){
    strip.clear();
  }
  strip.show();
}
