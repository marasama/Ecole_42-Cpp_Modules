#pragma once

#include <exception>
#include <iostream>
#include <stack>
#include <vector>
#include <fstream>
#include <algorithm>

template <typename T, class C = std::vector<T> >
class BitcoinExchange
{
	private:
		std::fstream _file;
	public:
		//To reach my parent container functions
		C Container;

		BitcoinExchange(char *file);
		~BitcoinExchange();

		class FileIsNotOpen : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Can't open the file!");
			}
		};
};

template <typename T, class C>
BitcoinExchange<T, C>::BitcoinExchange(char *file)
{
	_file.open(file);
	if (!_file.is_open())
		throw BitcoinExchange::FileIsNotOpen();
	std::string line;
	while (std::getline(_file,line))
		std::cout << line << std::cout;
}

template <typename T, class C>
BitcoinExchange<T, C>::~BitcoinExchange()
{

}
