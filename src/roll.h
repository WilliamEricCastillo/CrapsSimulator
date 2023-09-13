//
#ifndef ROLL_H
#define ROLL_H
#include "die.h"

class Roll
{
public:
    Roll(Die& a, Die& b): die1(a), die2(b){};
    void roll_die();
    int roll_value()const{return value;}

private:
    Die& die1;
    Die& die2;
    bool rolled{false};
    int value;

};
#endif