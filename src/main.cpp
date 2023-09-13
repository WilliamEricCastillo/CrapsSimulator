#include "die.h"
#include <iostream>
#include "die.h"
#include "roll.h"
#include "phase.h"
#include "shooter.h"
#include "point_phase.h"
#include "come_out_phase.h"
#include <iostream>

using std::cout;

int main()
{
    srand(time(NULL));
    Die die1;
    Die die2;
    Shooter shooter;
    Roll* roll;

    ComeOutPhase come_out_phase;

    roll = shooter.throw_die(die1,die2);

    while(come_out_phase.get_outcome(roll)==RollOutCome::natural ||
          come_out_phase.get_outcome(roll)==RollOutCome::craps)
    {
        cout<<"Rolled "<<roll->roll_value()<<"\n"
            <<"roll again"<<"\n";
        roll = shooter.throw_die(die1, die2);
    }

    cout << "Rolled "<< roll->roll_value()<<" start of point phase\n"
        <<"Roll until "<< roll->roll_value()<<" or a 7 is rolled\n";

    int point = roll->roll_value();
    roll = shooter.throw_die(die1,die2);

    PointPhase point_phase(point);

    while(point_phase.get_outcome(roll)== RollOutCome::point||
          point_phase.get_outcome(roll)== RollOutCome::nopoint)
    {
        cout<<"Rolled "<<roll->roll_value()<<" roll again\n";
        roll = shooter.throw_die(die1,die2);
    }

    cout <<"Rolled "<<roll->roll_value()<<" end of point phase\n";

    cout<<shooter;
    return 0;

}