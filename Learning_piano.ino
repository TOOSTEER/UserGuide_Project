
#include "Adafruit_NeoPixel.h" //Первоочерёдно необходимо импортировать библиотеку по работе со светодиодной ленте
unsigned long timing_const = 0;//Также вводятся две временные переменные необходимые для определения момента переключения на другой светодиод в дальнейшем
unsigned long timing_run = 0;
int pix = 360;
Adafruit_NeoPixel strip(pix, 6, NEO_RGB + NEO_KHZ400);

void setup() {
  Serial.begin(9600);//Задаём необходимые характеристики ленты(яркость), а также очищаем ленту для предотвращения ошибок
  strip.begin();
  strip.show();
  strip.setBrightness(20);
}

void loop() {//В данном блоке происходит вызов необходимых функций в зависимости от типа ноты 
  timing_run = millis();//Присваимваем переменной времени функцию millis
  
}
void note_16(int pin_num) { //Начинаем раписывать функцию вызова ноты из абстаркного массива и далее прописывем условия "падения" 16-и ричной ноты
  for (pin_num; pin_num <= pin_num - 5; pin_num--) {//Инициилизируем вызов определённого количества светодиода из "массива"
    strip.setPixelColor(pin_num, 250, 0, 0);
    if (timing_run = 150) {
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 1, 250, 0, 0);
    }
  }
  if (timing_run = 250) {
    strip.setPixelColor(pin_num - 5, 0, 0, 0);//Инициилизируем "падения" вызванного ряда светодиодов
  }
  strip.show();
}
void note_8(int pin_num) { //Прописываем подобную функцию для 8-и ричной ноты
  strip.setPixelColor(pin_num, 250, 0, 0);//Вызываем небходимое количество светодиодов из "массива"
  if (timing_run = 150) {
    strip.setPixelColor(pin_num - 1, 250, 0, 0);
  }
  for (pin_num; pin_num <= pin_num - 5; pin_num--) {
    strip.setPixelColor(pin_num, 0, 0, 0);
    strip.setPixelColor(pin_num - 2, 250, 0, 0);
    if (timing_run = 150) {
      strip.setPixelColor(pin_num - 1, 0, 0, 0);
      strip.setPixelColor(pin_num - 3, 250, 0, 0);//Инициилизуруем "падения" светодиодов
    }
    strip.setPixelColor(pin_num - 4, 0, 0, 0);
    if (timing_run = 250) {
      strip.setPixelColor(pin_num - 5, 0, 0, 0);
    }
  }
}
void note_4(int pin_num) {//Прописываем такую же функцию для 4-и ричной ноты
  for (pin_num; pin_num <= pin_num - 2; pin_num--) {//Вызываем нужное количество светодиодов из массива
    strip.setPixelColor(pin_num, 250, 0, 0);
    if (timing_run = 250) {
      strip.setPixelColor(pin_num - 1, 250, 0, 0);
    }
  }
  for (pin_num; pin_num <= pin_num - 5; pin_num--) {
    strip.setPixelColor(pin_num, 0, 0, 0);
    strip.setPixelColor(pin_num - 3, 250, 0, 0);
    if (timing_run = 150) {
      strip.setPixelColor(pin_num - 1, 0, 0, 0);
      strip.setPixelColor(pin_num - 4, 250, 0, 0);
    }
    for (pin_num - 3; pin_num - 3 <= pin_num - 5; pin_num--) {//Инициилизируем "падение"
      strip.setPixelColor(pin_num - 3, 0, 0, 0);
      if (timing_run = 333) {
        strip.setPixelColor(pin_num - 4, 0, 0, 0);
      }
    }
    strip.show();
  }
}
void note_2(int pin_num) {//Прописываем функцию для половинчатой ноты
  for (pin_num; pin_num <= pin_num - 4; pin_num--) {//Вызываем два светодиода из "массива"
    strip.setPixelColor(pin_num, 250, 0, 0);
    if (timing_run = 500) {
      strip.setPixelColor(pin_num - 1, 250, 0, 0);
    }
    if (timing_run = 500) {
      strip.setPixelColor(pin_num, 0, 0, 0);
      strip.setPixelColor(pin_num - 5, 250, 0, 0);
    }

    for (pin_num - 1; pin_num - 1 <= pin_num - 5; pin_num--) {//Инициилизируем "падения"
      strip.setPixelColor((pin_num - 1), 0, 0, 0);
      if (timing_run = 400) {
        strip.setPixelColor(pin_num - 2, 0, 0, 0);
      }
    }
    strip.show();
  }
}
void note_full(int pin_num) {//Прописываем функцию для целой ноты
  for (pin_num; pin_num <= pin_num - 5; pin_num--) {//Вызываем один светодиод из "массива" ввиду её типа
    strip.setPixelColor(pin_num, 250, 0, 0);
    if (timing_run = 250) {
      strip.setPixelColor(pin_num - 1, 250, 0, 0);
    }
    if (timing_run = 1600) {
      for (pin_num; pin_num <= pin_num - 5; pin_num--) {//Инициилизируем "падение"
        strip.setPixelColor(pin_num, 0, 0, 0);
        if (timing_run = 400) {
          strip.setPixelColor(pin_num - 1, 0, 0, 0);
        }
      }
    }
  }
  strip.show();
}
