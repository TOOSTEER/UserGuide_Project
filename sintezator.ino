#include <Adafruit_NeoPixel.h> //Иницилизация библиотки Adafruit_NeoPixel
unsigned long timing_const = 0;//Иницилизация статичной переменной времени
int pix = 360; //Инициилизируем общее количество светодиодов
Adafruit_NeoPixel strip(pix, 6, NEO_RGB + NEO_KHZ400);
void setup() {
  Serial.begin(9600);
  strip.begin();
  strip.show();
  strip.setBrightness(50); //Установление определённой яркости
}
void loop() {
}
void ful_note(int pin_num) { //Создание функции для вызова целой ноты
  unsigned long timing_run = millis(); //Инициилизация "бегущей" перемены времени
  for (pin_num; pin_num >= pin_num - 5; pin_num --) { //Создание цикла для "падения" светодиода до "нижней" позиции
    strip.setPixelColor(pin_num, 250, 0, 0);
    if (timing_run - timing_const == 250) {
      timing_const = timing_run;
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 1, 250, 0, 0);
    }
  }
  if (timing_run - timing_const == 4000) { //Установление времени "исчезновения" светодиода
    strip.clear();
  }
  strip.show();
}
void note_2(int pin_num) { //Создание функции для вызова половинной ноты
  unsigned long timing_run = millis(); //Инициилизация "бегущей" перменной ноты
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
  if (timing_run - timing_const == 2000) { //Установление времени "исчезновения" ноты
    timing_run = timing_const;
    strip.clear();
  }
  strip.show();
}
void note_4(int pin_num) { //Создание функции вызова четвёртой ноты
  unsigned long timing_run = millis(); //Инициилизация "бегущей" переменной времени
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
  if (timing_run - timing_const == 1000) { //Установление времени "исчезновения" ноты
    timing_run = timing_const;
    strip.clear();
  }
  strip.show();
}
void note_8(int pin_num) { //Создание функции для вызова восьмой ноты
  unsigned long timing_run = millis(); //Инициилизация "бегущей" переменной нот
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
  if (timing_run - timing_const == 500) { //Установление времени "исчезновения" ноты
    strip.clear();
  }
  strip.show();
}
void note_16(int pin_num) { //Создание функции для вызова шестнадцатой ноты
  unsigned long timing_run = millis(); //Инициилизация "бегущей" переменной времени
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
  if (timing_run - timing_const == 250) {//Установление времени "исчезновения" ноты
    strip.clear();
  }
  strip.show();
}
void note_32(int pin_num){ //Создание функции для вызова тридцать второй ноты
  unsigned long timing_run = millis(); //Иницилизация "бегущей" переменной времени
  for (pin_num; pin_num >= pin_num - 5;pin_num --){
    strip.setPixelColor(pin_num,250,0,0);
    if (timing_run - timing_const == 250){
      timing_run = timing_const;
      strip.setPixelColor(pin_num - 1, 250,0,0);
    }
  }
  if (timing_run - timing_const == 125){ //Установление времени "исчезновения" ноты
    strip.clear();
  }
  strip.show();
}
