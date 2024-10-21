#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <string>
#include <iostream>
#include <exception>
#include <sstream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>

template <typename T, class C = std::vector<T> >
class PmergeMe
{
	private:
		std::clock_t _start;
		C container;
	public:
		PmergeMe(int size, char *argv[]);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		//Member Functions
		void startSorting(const std::string &className, bool printCntner);
		void printContainer(bool sorted);
		void fordJohnson(int left, int right);
		void merge(C &array, int left, int middle, int right);

		class BadNumberInputException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Error: Bad number input.");
			}
		};
};

#endif
