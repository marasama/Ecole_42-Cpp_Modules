#include "PmergeMe.hpp"
#include <stack>

int main(int zart, char *zort[])
{

	if (zart < 3)
	{
		std::cout << "Error: there is not enough input" << std::endl;
		return (0);
	}
	try
	{
		PmergeMe<std::vector<int> > first(zart, zort);
		PmergeMe<std::deque<int> > second(zart, zort);
		first.printContainer(false);
		first.startSorting("std::vector", true);
		second.startSorting("std::deque", false);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}