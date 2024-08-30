#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this == &other)
        return *this;
    return *this;
}

void ScalarConverter::convert(std::string str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
    {
        pseudoPrinter(str);
        return ;
    }
    const char *cstr = str.c_str();
    int i = 0;
    int f_c = 0;
    int d_c = 0;
    int n_c = 0;
    int j = 1;
    while (cstr[j] && (cstr[0] != '-' || cstr[0] != '+'))
    {
        if (cstr[j] == '-' || cstr[j] == '+')
            return ;
        else if (isalpha(cstr[j]) && cstr[j] != 'f')
            return ;
        else if (isalpha(cstr[0]) && isdigit(cstr[1]))
            return ;
        j++;
    }
    if (cstr[1] == '\0' && isalpha(cstr[0]))
    {
        convertChar(cstr[0]);
        return ;
    }
    while (cstr[i])
    {
        if (cstr[i] == 'f')
            f_c++;
        else if (cstr[i] == '.')
            d_c++;
        else if (cstr[i] == '-')
            n_c++;
        i++;
    }
    i = 0;
    if (f_c > 1 || d_c > 1 || n_c > 1)
    {
        impossiblePrinter();
        return;
    }

    try
    {
        if ((isdigit(cstr[i]) || cstr[i]) && f_c == 0 && d_c == 0)
            convertInt(std::stoi(str));
        else if (f_c == 1 && d_c == 1)
            convertFloat(std::stof(str));
        else if (f_c == 0 && d_c == 1)
            convertDouble(std::stod(str));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ScalarConverter::convertChar(char i)
{
    printFunc(i,i,i,i);
}

void ScalarConverter::convertInt(int i)
{
    printFunc(i,i,i,i);
}

void ScalarConverter::convertFloat(float i)
{
    printFunc(i,i,i,i);
}

void ScalarConverter::convertDouble(double i)
{
    printFunc(i,i,i,i);
}

void ScalarConverter::pseudoPrinter(std::string str)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << str << "f" << std::endl;
    std::cout << "double: " << str << std::endl;
}

void ScalarConverter::impossiblePrinter()
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
}

void ScalarConverter::printFunc(char a, int b, float c, double d)
{
    if (b < 0)
        std::cout << "char: " << "impossible" << std::endl;
    else if (a <= 32 || a >= 127 || (b >= INT_MAX || b <= INT_MIN) || (b <= 32 || b >= 127))
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" << a << "'" << std::endl;
    std::cout << "int: " << b << std::endl;

    int x = (int)c;
    if (c == (float)x)
    {
        std::cout << "float: " << c << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << c << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}
