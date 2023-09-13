//

#include "point_phase.h"


RollOutCome PointPhase::get_outcome(Roll *roll)
{
    if(roll->roll_value() == point)
    {
        return RollOutCome::point;
    }
    else if (roll->roll_value()== 7)
    {
        return RollOutCome::seven_out;
    }

    return RollOutCome::nopoint;

}

