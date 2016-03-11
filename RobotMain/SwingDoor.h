#ifndef SWING_DOOR_H_
#define SWING_DOOR_H_

#include "ControllerData.h"
#include "Constants.h"

class SwingDoor
{
  public:
    SwingDoor(int _swingDoorPin);
    void startUp();
    void periodic(ControllerData ctrl);

  private:
    int swingDoorPin;
    
};


#endif

