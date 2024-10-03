#include "PmergeMe.hpp"

int main(int zart, char *zort[])
{
	std::vector<int> first;
	try
	{
		for (int i = 1; i < zart; i++)
		{
			std::stringstream ss(zort[i]);
			int tmp;
			if (ss >> tmp && tmp > 0)
			{
				first.push_back(tmp);
			}
			else
			{
				std::cout << "Error" << std::endl;
				return (0);
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}