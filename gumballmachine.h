#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <iostream>
#include <QString>
#include <QStringList>
using namespace std;
#include "state.h"
#include "soldoutstate.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"

class GumballMachine {
private:
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *state;
    State *winnerState;
    int count;
public:
    GumballMachine(int numberGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void releaseBall();
    int getCount();
    void refill(int count);
    State* getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    QString toString();
};

#endif // GUMBALLMACHINE_H
