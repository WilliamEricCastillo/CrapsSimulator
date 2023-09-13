//

#include "come_out_phase.h"


RollOutCome ComeOutPhase::get_outcome(Roll *roll)
{
    if(roll->roll_value() == 7 || roll->roll_value() == 11)
    {
        return RollOutCome::natural;
    }

    else if (roll->roll_value() == 2 || roll->roll_value() ==3
    || roll->roll_value() == 12)
    {
        return RollOutCome::craps;
    }

    return RollOutCome::point;

}

