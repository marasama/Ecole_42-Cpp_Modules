#pragma once

#include <exception>
#include <iostream>
#include <stack>
#include <vector>
#include <fstream>
#include <algorithm>
#include <map>
#include <sstream>

struct
{
   	std::string date;
   	double exchangeRate;
	double value;
}typedef lineData;

template <typename T, class C = std::deque<lineData> >
class BitcoinExchange
{
	private:
		std::fstream _file;
		C<lineData> _dataBase;
	public:
		BitcoinExchange(char *file);
		BitcoinExchange(const BitcoinExchange<T, C> &other) : std::deque<T,C>(other);
		~BitcoinExchange();

		BitcoinExchange<T, C> operator=(const BitcoinExchange<T, C> &other) : std::map<T, C> &std::map<T,C>::operator=(other);

		void storeData(void);
		bool isValidDate(const std::string &date);

		class FileIsNotOpen : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Can't open the file!");
			}
		};
};

template <typename T, class C>
bool BitcoinExchange<T, C>::isValidDate(const std::string& date) 
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    int year, month, day;
    std::stringstream ss(date);
    char dash1, dash2;

    ss >> year >> dash1 >> month >> dash2 >> day;

    if (dash1 != '-' || dash2 != '-')
        return false;
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if (month == 2)
	{
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeap && day > 29)
            return false;
        if (!isLeap && day > 28)
            return false;
    }
    return true;
}

template <typename T, class C>
void BitcoinExchange<T, C>::storeData(void)
{
	std::string line, date, value;
	std::string lastDate = "2009-01-01";
	std::getline(_file, line);
	while(std::getline(_file,line))
	{
		std::stringstream ss(line);
		std::getline(ss, date, ',');
		if (!isValidDate(date))
			date = lastDate;
		ss >> value;
		if (strtof(value, NULL) < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (strtof(value, NULL) > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		lastDate = date;
		_dataBase.push_back({date, std::stod(value), 0});
	}
}

template <typename T, class C>
BitcoinExchange<T, C>::BitcoinExchange(const BitcoinExchange<T, C> &other)
{
}

template <typename T, class C>
BitcoinExchange<T,C> BitcoinExchange<T,C>::operator=(const BitcoinExchange<T, C> &other)
{
}

template <typename T, class C>
BitcoinExchange<T, C>::BitcoinExchange(char *file)
{
	_file.open(file);
	if (!_file.is_open())
		throw BitcoinExchange::FileIsNotOpen();
}

template <typename T, class C>
BitcoinExchange<T, C>::~BitcoinExchange()
{
	if (_file.is_open())
		_file.close();
}
