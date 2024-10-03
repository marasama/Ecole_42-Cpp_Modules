#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>

template<class C = std::vector<int> >
class PmergeMe
{
	private:
		C container;
	public:
		PmergeMe(char *argv[]);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		//Other functions
		void fordJohnson(C &container);
};

template<class C>
PmergeMe<C>::PmergeMe(char *argv[])
{
	
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
