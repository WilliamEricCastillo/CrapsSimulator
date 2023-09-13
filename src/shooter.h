//
#ifndef SHOOTER_H
#define SHOOTER_H
#include "roll.h"
#include <vector>
#include <iostream>

class Shooter
{
    friend std::ostream& operator<<(std::ostream& out, Shooter& a);

public:
    Roll* throw_die(Die& die1,Die& die2);
    ~Shooter();

private:
    std::vector<Roll*> rolls;
};

#endif