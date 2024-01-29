//
// Created by flori on 29.01.2024.
//

#ifndef PR2_TUT_BARNFSM_H
#define PR2_TUT_BARNFSM_H
#include "SmartBarn.h"
#include "ISmartBarn.h"

class BarnFSM: public ISmartBarn {
private:
    SmartBarn* Barn; //Object

    enum class State {
        Initial,
        Idle,
        Fehler,
        Nachtruhe,
        Fuettern,
    };
    State state;
    State nextState = state;
public:
    BarnFSM();
    virtual ~BarnFSM();

    int getState() const;

    void evaluateState();
    void evaluateTransistion();
};


#endif //PR2_TUT_BARNFSM_H
