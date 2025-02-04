cmake_minimum_required(VERSION 3.15)

project(failing-test)

enable_testing()

add_test(NAME failing-test-1 COMMAND cat nonexistent)
set_property(TEST failing-test-1 PROPERTY WILL_FAIL true)

add_test(NAME failing-test-2 COMMAND cat nonexistent)
set_property(TEST failing-test-2 PROPERTY PASS_REGULAR_EXPRESSION "cat: nonexistent: No such file or directory")
