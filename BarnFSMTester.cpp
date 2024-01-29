#include <iostream>
#include "BarnFSM.h"
#include "SmartBarn.h"

class BarnFSMTester {
public:
    static void test() {
        BarnFSM barnFSM; // Erstellen einer Instanz der Finite State Machine
        SmartBarn smartBarn;

        // Testen verschiedener Szenarien
        std::cout << "Initial State: " << barnFSM.getState() << std::endl;

        barnFSM.evaluateTransistion();
        barnFSM.evaluateState();
        std::cout << "After Transition Initial: " << barnFSM.getState() << std::endl;


        // Weitere Tests je nach Anforderungen und Funktionalität der FSM

        barnFSM.evaluateTransistion();
        barnFSM.evaluateState();
        std::cout << "After Transition 1: " << barnFSM.getState() << std::endl;


        barnFSM.evaluateTransistion();
        barnFSM.evaluateState();
        std::cout << "After Transition 1: " << barnFSM.getState() << std::endl;

        barnFSM.evaluateTransistion();
        barnFSM.evaluateState();
        std::cout << "After Transition 1: " << barnFSM.getState() << std::endl;

        barnFSM.evaluateTransistion();
        barnFSM.evaluateState();
        std::cout << "After Transition 1: " << barnFSM.getState() << std::endl;
    }
};

int main() {
    BarnFSMTester::test(); // Aufruf der Testfunktion
    return 0;
}
