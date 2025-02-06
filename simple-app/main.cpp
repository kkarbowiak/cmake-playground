#include <iostream>


int main()
{
    std::cout << "usage: app [-h] [--optional OPTIONAL] [-v] positional\n\npositional arguments:\n  positional\n\noptional arguments:\n  -h, --help            show this help message and exit\n  --optional OPTIONAL\n  -v, --version         show program's version number and exit" << std::endl;
    return 0;
}
