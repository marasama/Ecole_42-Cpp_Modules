#pragma once

#include <sstream>
#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <exception>

class RPN
{
	private:
		std::string _str;
	public:
		RPN(char *notatiton);
		RPN(const RPN &other): _str(other._str){};

		RPN &operator=(const RPN &other){_str = other._str;return (*this);}
		~RPN(){};

		void computeToken(std::stack<int> &operands, const std::string &token);
		void calculateNotation();

		class FormatErrorException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Error: Bad notation format.");
			}
		};

		class BadTokenException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Error: Bad token input.");
			}
		};
};