// ライブラリを読み込むためのコード
#include <NintendoSwitchControlLibrary.h>

void setup() {
  // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
  pushHat(Button::A, 2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton(Button::A, 500, 4);
  pushButton(Button::B, 500, 3);
}
