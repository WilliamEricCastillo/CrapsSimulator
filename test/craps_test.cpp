#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"
#include "come_out_phase.h"
#include "point_phase.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Die Rolls are between 1-6")
{
    srand(time(NULL));

    Die test_roll_value;

    for(int i = 0; i <10; ++i)
    {
        test_roll_value.roll();

        REQUIRE(test_roll_value.rolled_value() > 0);
        REQUIRE(test_roll_value.rolled_value() < 7);
    }
}

TEST_CASE("Verify rolled Dice values are between 2-12")
{
    srand(time(NULL));

    Die die1;
    Die die2;

    Roll test_dice_value(die1,die2);

    for(int i= 0; i<10; ++i)
    {
        test_dice_value.roll_die();
        REQUIRE(test_dice_value.roll_value() > 1);
        REQUIRE(test_dice_value.roll_value() < 13);
    }
}

TEST_CASE("Verify shooter returns a roll result between values 2-12")
{
    srand(time(NULL));
    Shooter shoot;
    Die die1;
    Die die2;

    for(int i=0; i<10; ++i)
    {
        Roll* value = shoot.throw_die(die1, die2);
        REQUIRE(value->roll_value() > 1);
        REQUIRE(value->roll_value() <13);
    }
}

TEST_CASE("Verify ComeOutPhase class returns values natural, craps, and point")
{
    srand(time(NULL));
    Shooter shoot;
    Die die1;
    Die die2;
    ComeOutPhase come_out;

    for(int i = 0; i <10; ++i)
    {
         Roll* roll = shoot.throw_die(die1,die2);
        auto test_value = come_out.get_outcome(roll);

        REQUIRE((test_value == RollOutCome::natural ||
                test_value == RollOutCome::craps ||
                test_value == RollOutCome::point));
        REQUIRE((test_value == RollOutCome::seven_out) == false);
        REQUIRE((test_value == RollOutCome::nopoint) == false);
    }
}

TEST_CASE("Test that PointPhase get outcomes returns values point, seven_out and nopoint")
{
    srand(time(NULL));
    Shooter shoot;
    Die die1;
    Die die2;
    PointPhase point(0);
    RollOutCome out_come;

    for (int i = 0; i < 10; ++i) {
        Roll* roll = shoot.throw_die(die1, die2);
        auto test_value = point.get_outcome(roll);


        REQUIRE((test_value == RollOutCome::natural ||
                 test_value == RollOutCome::seven_out ||
                 test_value == RollOutCome::nopoint));
        REQUIRE((test_value == RollOutCome::craps) == false);
        REQUIRE((test_value == RollOutCome::natural) == false);
    }
}
