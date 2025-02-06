cmake_minimum_required(VERSION 3.15)

project(simple-app)

add_executable(simple-app)
target_sources(simple-app PRIVATE main.cpp)
target_compile_features(simple-app PRIVATE cxx_std_20)

enable_testing()

add_test(NAME simple-app COMMAND simple-app)
set_property(TEST simple-app PROPERTY PASS_REGULAR_EXPRESSION "usage: app \\[-h\\] \\[--optional OPTIONAL\\] \\[-v\\] positional")
