#include "BitcoinExchange.hpp"

void BitcoinExchange::printData(const std::string &date, double value, double rate)
{
	std::cout << date << " => " << value << " = " << value * rate << std::endl;
}

void BitcoinExchange::takeInputFile(char *file)
{
	std::ifstream inputFile(file);
	if (!inputFile.is_open())
		throw BitcoinExchange::FileIsNotOpen();
	std::string line, date, value;
	std::getline(inputFile, line);
	if (line.compare("date | value"))
		throw BitcoinExchange::FormatError();
	while(getline(inputFile, line))
	{
		if (line.find(" | ") == std::string::npos)
		{
			std::cout << "Error: Bad input => " << line << std::endl;
			continue;
		}
		size_t pos = line.find(" | ");
		date = line.substr(0, pos);
		if (!isValidDate(date))
		{
			std::cout << "Error: Bad input => " << date << std::endl;
			continue;
		}
		value = line.substr(pos + 3);

		double tmpValue;
        std::istringstream iss(value);
        if (!(iss >> tmpValue)) {
            std::cout << "Error: Invalid number format in value => " << value << std::endl;
            continue;
        }
		if (tmpValue < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (tmpValue > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		std::map<std::string, double>::iterator it = _dataBase.find(date);
		if (it != _dataBase.end())
        {
			printData(it->first, tmpValue, it->second);
		}
		else
		{
			it = _dataBase.lower_bound(date);
			if (it == _dataBase.begin())
			{
				std::cout << "Error: can't found a suitable date" << std::endl;
				continue;
			}
			--it;
			printData(it->first, tmpValue, it->second);
		}
	}
	inputFile.close();
}

bool BitcoinExchange::isValidDate(const std::string& date) 
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

void BitcoinExchange::storeData(void)
{
	std::string line, date;
	double value = 0;
	std::getline(dbFile, line);
	while(std::getline(dbFile, line))
	{
		std::stringstream ss(line);
		std::getline(ss, date, ',');
		ss >> value;
		_dataBase[date.c_str()] = value;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	this->_dataBase = other._dataBase;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	this->_dataBase = other._dataBase;

	return (*this);
}

BitcoinExchange::BitcoinExchange(std::string file)
{
	dbFile.open(file.c_str());
	if (!dbFile.is_open())
		throw BitcoinExchange::FileIsNotOpen();
}

BitcoinExchange::~BitcoinExchange()
{
	if (dbFile.is_open())
		dbFile.close();
}
