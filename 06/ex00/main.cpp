#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
    {
        std::cout << "Argument failed" << std::endl;
        return 1;
    }
    ScalarConverter::convert((std::string)argv[1]);
    return 0;
}
