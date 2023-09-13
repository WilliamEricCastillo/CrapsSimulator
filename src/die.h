//
#ifndef DIE_H
#define DIE_H
#include <stdlib.h>
#include <time.h>


class Die
{
public:
    void roll();
    int rolled_value()const{return roll_value;}

private:
    int roll_value;
    int sides{6};
};
#endif
