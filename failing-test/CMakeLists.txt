cmake_minimum_required(VERSION 3.15)

project(failing-test)

enable_testing()

add_test(NAME failing-test COMMAND cat nonexistent)
set_property(TEST failing-test PROPERTY PASS_REGULAR_EXPRESSION "cat: nonexistent: No such file or directory")
