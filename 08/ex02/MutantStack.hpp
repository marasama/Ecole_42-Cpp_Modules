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
		typedef typename C::const_iterator const_iterator;

		// Constructor & Destructor
		MutantStack(const C& cont = C()) : std::stack<T, C>(cont) {}
		MutantStack(const MutantStack &other) : std::stack<T, C>(other){}
		// Assignment Operator
		MutantStack &operator=(const MutantStack &other);

		// Iterator Functions
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
};

#include "MutantStack.tpp"

#endif