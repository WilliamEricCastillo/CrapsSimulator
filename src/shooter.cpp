//
#include "shooter.h"

std::ostream &operator<<(std::ostream &out, Shooter &a)
{
    for(auto shoot: a.rolls)
    {
        out << shoot->roll_value()<<"\n";
    }
    return out;
}

Roll* Shooter::throw_die(Die &die1, Die &die2)
{
    Roll* throw_die = new Roll(die1,die2);
    throw_die->roll_die();
    rolls.push_back(throw_die);

    return throw_die;
}

Shooter::~Shooter()
{
    for(auto rolled: rolls)
    {
        delete[] rolled ;
    }
}
