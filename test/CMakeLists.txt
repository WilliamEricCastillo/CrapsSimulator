add_executable(craps_tests "craps_test.cpp")
target_link_libraries(craps_tests craps_library)
add_test(NAME craps_tests COMMAND craps_tests -s)