#pragma once

#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange
{
	private:
		std::ifstream dbFile;
		std::map<std::string, double> _dataBase;
	public:
		BitcoinExchange(std::string file);
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();

		BitcoinExchange &operator=(const BitcoinExchange &other);

		void storeData(void);
		void takeInputFile(char *fileName);
		bool isValidDate(const std::string &date);
		void printData(const std::string &date, double value, double rate);

		class FileIsNotOpen : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Error: Can't open the file!");
			}
		};

		class FormatError : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Error: File format must be 'date | value'");
			}
		};
};