cmake_minimum_required(VERSION 3.15)

project(bracket-regex)

enable_testing()

add_test(NAME bracket-regex COMMAND echo "usage: app [-h] [--optional OPTIONAL] [-v] positional\n\npositional arguments:\n  positional\n\noptional arguments:\n  -h, --help            show this help message and exit\n  --optional OPTIONAL\n  -v, --version         show program's version number and exit")
set_property(TEST bracket-regex PROPERTY PASS_REGULAR_EXPRESSION "usage: app \\[-h\\] \\[--optional OPTIONAL\\] \\[-v\\] positional")
