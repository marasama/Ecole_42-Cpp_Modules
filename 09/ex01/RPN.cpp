#include "RPN.hpp"

RPN::RPN(char *notation)
{
	_str = notation;
	calculateNotation();
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &other) : _str(other._str)
{
}

RPN &RPN::operator=(const RPN &other)
{
    _str = other._str;
    return (*this);
}

void RPN::computeToken(std::stack<int> &operands, const std::string &token)
{
    if (operands.size() < 2)
        throw FormatErrorException();

    int second = operands.top();
	operands.pop();
    int first = operands.top();
	operands.pop();

    if (token == "+")
        operands.push(first + second);
    else if (token == "-")
        operands.push(first - second);
    else if (token == "*")
        operands.push(first * second);
    else if (token == "/")
    {
        if (second == 0)
            throw std::runtime_error("Error: Division by zero.");
        operands.push(first / second);
    }
    else
        throw BadTokenException();
}

void RPN::calculateNotation()
{
    std::stringstream ss(_str);
    std::stack<int> operands;
    std::string token;

    while (ss >> token)
    {
        std::stringstream tokenStream(token);
        int num;
        if (tokenStream >> num)
            operands.push(num);
        else
            computeToken(operands, token);
    }

    if (operands.size() != 1)
        throw FormatErrorException();

    std::cout << operands.top() << std::endl;
}