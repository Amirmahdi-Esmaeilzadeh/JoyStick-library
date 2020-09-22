#include "JoyStick.h"

JoyStick::JoyStick(bool sure) {
  msg = sure;
}
void JoyStick::begin(int boad) {
  Serial.begin(boad);
  if (msg == true) {
    Serial.println("JoyStick library is for JoyStick easy controling");
    Serial.print("boad rate: ");
    Serial.println(boad);
  }
}
void JoyStick::pin(int x, int y) {
  X = x;
  Y = y;
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
}
bool JoyStick::up() {
  int y = analogRead(Y);
  if (y >= 2000 && y > 0) {
    return 1;
  } else {
    return 0;
  }
}
bool JoyStick::down() {
  int y = analogRead(Y);
  if (y <= -2000 && y < 0) {
    return 1;
  } else {
    return 0;
  }
}
bool JoyStick::right() {
  int x = analogRead(X);
  if (x >= 2000 && x > 0) {
    return 1;
  } else {
    return 0;
  }
}
bool JoyStick::left() {
  int x = analogRead(X);
  if (x <= -2000 && x < 0) {
    return 1;
  } else {
    return 0;
  }
}
long JoyStick::upNum() {
  int y = analogRead(Y);
  y /= 335;
  if (y > 0) {
    return y;
  }
  else {
    return 0;
  }
}
long JoyStick::downNum() {
  int y = analogRead(Y);
  y *= 335;
  if (y < 0) {
    return y;
  }
  else {
    return 0;
  }
}
long JoyStick::rightNum() {
  int x = analogRead(X);
  x /= 335;
  if (x > 0) {
    return x;
  }
  else {
    return 0;
  }
}
long JoyStick::leftNum() {
  int x = analogRead(X);
  x *= 335;
  if (x < 0) {
    return x;
  }
  else {
    return 0;
  }
}
