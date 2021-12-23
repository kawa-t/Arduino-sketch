// ライブラリを読み込むためのコード
  #include <NintendoSwitchControlLibrary.h>

void setup() {
  // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
  pushHat(Hat::DOWN, 2000, 5);
  pushButton(Button::R, 2000);
}

void loop() {
  // put your main code here, to run repeatedly:
    pushButton(Button::X, 500, 5);
    pushButton(Button::A, 1000);
    pushButton(Button::R, 5000);
    pushButton(Button::A, 1000);
    pushHat(Hat::DOWN, 1000, 2);
    pushButton(Button::A, 500);
    pushButton(Button::A, 1000, 2);
    pushButton(Button::B, 2000, 3);
    pushButton(Button::A, 1000);
    pushHat(Hat::DOWN, 500); 
    pushButton(Button::A, 3000);
    pushButton(Button::B, 5000);
}
