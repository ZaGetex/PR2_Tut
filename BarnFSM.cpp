//
// Created by flori on 29.01.2024.
//

#include "BarnFSM.h"

#include <iostream>

BarnFSM::BarnFSM() {
    state = State::Initial;

}

void BarnFSM::evaluateTransistion() {

    switch(state) {
        case State::Initial: {
            nextState = State::Idle;
        }
            break;
        case State::Idle: {
            if (Barn->getChickenInside() != Barn->getChicken()) {
                Barn->printError();
                nextState = State::Fehler;
            }

            else {
                Barn->closeDoor();
                nextState = State::Nachtruhe;
            }
            break;
        }
        case State::Fehler: {
            Barn->printErrorResolved();
            nextState = State::Idle;
        }
            break;
        case State::Nachtruhe: {
            Barn->openDoor();
            nextState = State::Fuettern;
        }
            break;
        case State::Fuettern: {
            nextState = State::Idle;
        }
            break;

    }
    state = nextState;
}

void BarnFSM::evaluateState() {
    switch (state) {
        case State::Idle:
            printf("...");
        break;
        case State::Fehler:
            break;
        case State::Nachtruhe:
            break;
        case State::Fuettern:
            Barn->dispenseFood();
            break;
    }

}

int BarnFSM::getState() const {
    return static_cast<int>(state);
}

BarnFSM::~BarnFSM() =default;


