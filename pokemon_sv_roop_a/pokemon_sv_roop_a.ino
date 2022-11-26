// ライブラリを読み込むためのコード
#include <NintendoSwitchControlLibrary.h>

void setup() {
  // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
  pushHat(Hat::DOWN, 2000, 5);
  pushButton(Button::R, 2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton(Button::A, 500);
}
