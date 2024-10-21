#include "BitcoinExchange.hpp"

int main(int zart, char *zort[])
{
	if (zart != 2)
	{
		std::cerr << "\033[1;35mError: could not open file.\033[0" << std::endl;
		return (0);
	}
	try
	{
		BitcoinExchange myClass("data.csv");
		myClass.storeData();
		myClass.takeInputFile(zort[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[1;35m" << e.what() << "\033[0"<< '\n';
	}
}