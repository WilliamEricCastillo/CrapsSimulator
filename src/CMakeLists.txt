add_library(craps_library "roll.h" "roll.cpp"
								"die.cpp" "die.h"
								"shooter.cpp" "shooter.h"
                                "phase.h" "phase.cpp" "point_phase.h" "point_phase.cpp"
                                "come_out_phase.h" "come_out_phase.cpp") 
								
add_executable(craps_exe "main.cpp" "roll.cpp" "die.cpp" "phase.cpp" "point_phase.cpp"
                               "shooter.cpp" "come_out_phase.cpp")