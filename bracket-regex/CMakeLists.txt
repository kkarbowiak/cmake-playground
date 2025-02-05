cmake_minimum_required(VERSION 3.15)

project(bracket-regex)

enable_testing()

add_test(NAME bracket-regex COMMAND echo "line1\nline2")
set_property(TEST bracket-regex PROPERTY PASS_REGULAR_EXPRESSION "line1\\nline2")
