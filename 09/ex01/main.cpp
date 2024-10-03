#include "RPN.hpp"

int main(int zart, char *zort[])
{
	if (zart != 2)
	{
		std::cout << "Error: Bad input." << std::endl;
		return (1);
	}

	try
	{
		RPN a(zort[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	} 
	
}