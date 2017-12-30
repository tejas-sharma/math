add_unit_test(math_tests math_tests.cpp)
target_link_libraries(math_tests math)
# Add an executable for ease of hooking up debugger
add_executable(math_tests_exec math_tests_exec.cpp)
target_link_libraries(math_tests_exec math)
