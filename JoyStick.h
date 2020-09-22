#ifndef tl
#define tl

#if(ARDUINO>=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
class JoyStick {
  public:
    JoyStick(bool sure);
    void begin(int boad);
    void pin(int x,int y);
    bool up();
    bool down();
    bool right();
    bool left();
    long upNum();
    long downNum();
    long rightNum();
    long leftNum();
  private:
    bool msg;
    int X;
    int Y;
};
#endif
