//
#include "die.h"

void Die::roll()
{
    roll_value = rand() % sides + 1;
}
