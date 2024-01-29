//
// Created by Altenbeck, Lukas on 27.06.23.
//

#ifndef GOOGLE_TEST_EMPTY_PROJECT_SMARTBARN_H
#define GOOGLE_TEST_EMPTY_PROJECT_SMARTBARN_H

#include "ISmartBarn.h"

class SmartBarn: public ISmartBarn{
private:
    int num_chicken;
    int chicken_inside;
public:
    SmartBarn();
    SmartBarn(int n_chicken);
    int getNumEggs() const;
    int getChickenInside() const;
    int getChicken() const;
    void openDoor();
    void closeDoor();
    void dispenseFood();
    void printError();
    void printErrorResolved();
    void setLights(bool state);
    void setChicken();
    ~SmartBarn() {};
};


#endif //GOOGLE_TEST_EMPTY_PROJECT_SMARTBARN_H
