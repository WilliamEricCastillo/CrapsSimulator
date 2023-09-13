//
#ifndef POINT_PHASE_H
#define POINT_PHASE_H
#include "phase.h"

class PointPhase : public Phase
{
public:
    PointPhase(int p): point(p) {}

    RollOutCome get_outcome(Roll* roll) override;

private:
    int point;
};

#endif