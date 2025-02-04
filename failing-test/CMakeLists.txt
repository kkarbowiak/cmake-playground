cmake_minimum_required(VERSION 3.15)

project(failing-test)

enable_testing()

add_test(NAME failing-test COMMAND cat nonexistent)
