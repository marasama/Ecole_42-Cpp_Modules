#pragma once

#include <exception>
#include <iostream>

template<typename T>
class Array
{
	private:
		unsigned int _size;
		T *_array;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();
		unsigned int size(void);
		Array &operator=(const Array &other);
		T &operator[](unsigned int index);
		class OutOfBondException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Out of array bonds");
				};
		};
};

#include "Array.tpp"
