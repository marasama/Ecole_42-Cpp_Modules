#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <exception>
#include <iostream>

template<typename T, class C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public:
		//Iterators
		typedef typename C::iterator iterator;

		// Constructor & Destructor
		MutantStack(const C& cont = C()) : std::stack<T, C>(cont) {}
		MutantStack(const MutantStack &other) : std::stack<T, C>(other){}
		// Assignment Operator
		MutantStack &operator=(const MutantStack &other)
		{
			if (this != &other) 
			{
				std::stack<T, C>::operator=(other);
			}
			return (*this);
		}

		// Iterator Functions
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif