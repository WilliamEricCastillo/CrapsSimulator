//
#ifndef PHASE_H
#define PHASE_H
#include "roll.h"

enum  class RollOutCome {natural, craps, point, seven_out, nopoint};

class Phase
{
public:
    virtual RollOutCome get_outcome(Roll* roll) = 0;

};

#endif