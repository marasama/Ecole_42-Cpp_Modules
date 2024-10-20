#include "MutantStack.hpp"

template <typename T, class C>
MutantStack<T, C>
	&MutantStack<T, C>::operator=(const MutantStack &other)
{
	if (this != &other) 
	{
		std::stack<T, C>::operator=(other);
	}
	return (*this);
}

template <typename T, class C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin()
{
	return this->c.begin();
}

template <typename T, class C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
	return this->c.end();
}

template <typename T, class C>
typename MutantStack<T, C>::const_iterator MutantStack<T, C>::begin() const
{
	return this->c.begin();
}

template <typename T, class C>
typename MutantStack<T, C>::const_iterator MutantStack<T, C>::end() const
{
	return this->c.end();
}

