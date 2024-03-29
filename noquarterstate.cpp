#include "noquarterstate.h"

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
}

NoQuarterState::~NoQuarterState() {

}

void NoQuarterState::insertQuarter() {
    cout << "You inserted a quarter" << endl;
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
    cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank() {
    cout << "You turned, but there's no quarter" << endl;
 }

void NoQuarterState::dispense() {
    cout << "You need to pay first" << endl;
}

QString NoQuarterState::toString() {
    return "waiting for quarter";
}
