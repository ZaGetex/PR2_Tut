//
// Created by Altenbeck, Lukas on 27.06.23.
//

#include "SmartBarn.h"
#include <random>
#include <ctime>
#include <iostream>
#define N_CHICKEN_DEFAULT 10

SmartBarn::SmartBarn() {
    num_chicken = N_CHICKEN_DEFAULT;
    srand(time(NULL));
}

SmartBarn::SmartBarn(int n_chicken) {
    num_chicken = n_chicken;
    srand(time(NULL));
}

void SmartBarn::closeDoor() {
    std::cout << "The door was closed!" << std::endl;
}

void SmartBarn::openDoor() {
    std::cout << "The door was opened!" << std::endl;
}

void SmartBarn::dispenseFood() {
    std::cout << "The chicken look happy - some food has beed dispensed." << std::endl;
}

int SmartBarn::getNumEggs() const{
    return rand()%num_chicken+1;
}

int SmartBarn::getChickenInside() const{
    return this->num_chicken;
}

int SmartBarn::getChicken() const {
    return num_chicken;
}

void SmartBarn::printError() {
    std::cout << "An ERROR has occured!" << std::endl;
    printf("Anzahl: %i | Drinne: %i \n", this->num_chicken, this->chicken_inside);
}

void SmartBarn::printErrorResolved() {
    std::cout << "The ERROR has been resolved!" << std::endl;
}

void SmartBarn::setLights(bool state) {
    std::cout << "Lights turned " << (state ? "ON" : "OFF") << "." << std::endl;
}

void SmartBarn::setChicken() {
    this->chicken_inside = this->num_chicken;
}