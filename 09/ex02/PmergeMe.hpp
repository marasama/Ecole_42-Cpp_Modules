#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <sstream>
#include <deque>
#include <sys/time.h>

template<class C = std::vector<int> >
class PmergeMe
{
	private:
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

template<class C>
void PmergeMe<C>::startSorting(const std::string &className, bool printCntner)
{
	struct timeval startTime, endTime;
	gettimeofday(&startTime, 0);
	fordJohnson(0, container.size() - 1);
	if (printCntner)
		printContainer(true);
	gettimeofday(&endTime, 0);
	double timePased = ((double)endTime.tv_usec - (double)startTime.tv_usec) / 1000000;
	std::cout << "Time to process a range of " << 
	container.size() << " elements with " << 
	className << "\t:" << timePased << " seconds" << std::endl; 
}

template<class C>
void PmergeMe<C>::fordJohnson(int left, int right)
{
	if (left < right)
	{ 
		int middle = left + (right - left) / 2;
		fordJohnson(left, middle);
		fordJohnson(middle + 1, right);

		merge(container, left, middle, right);
	}
}

template<class C>
void PmergeMe<C>::merge(C &array, int left, int middle, int right)
{
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    if (leftSize < 0 || rightSize < 0) {
        throw std::runtime_error("Invalid sizes for merging.");
    }

    C leftArray(leftSize), rightArray(rightSize);

    for (int i = 0; i < leftSize; i++)
    {
        leftArray[i] = array[left + i];
    }

    for (int i = 0; i < rightSize; i++)
    {
        rightArray[i] = array[middle + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

template<class C>
void PmergeMe<C>::printContainer(bool sorted)
{
	if (sorted)
		std::cout << "After:\t";
	else 
		std::cout << "Before:\t";
	for (typename C::iterator it = container.begin(); it != container.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;	
}

template<class C>
PmergeMe<C>::PmergeMe(int size, char *argv[])
{
	for (int i = 1; i < size; i++)
	{
		std::stringstream ss(argv[i]);
		int tmp;
		if (ss >> tmp && tmp > 0)
		{
			container.push_back(tmp);
		}
		else
			throw BadNumberInputException();
	}
}

template<class C>
PmergeMe<C>::PmergeMe(const PmergeMe &other)
{

}

template<class C>
PmergeMe<C> &PmergeMe<C>::operator=(const PmergeMe<C> &other)
{

}

template<class C>
PmergeMe<C>::~PmergeMe()
{

}