#pragma once

#include <vector>
#include <iostream>
#include <iterator>
#include <cstdlib>
#include <algorithm>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _array;
	public:
		Span(unsigned int n);
		Span(const Span &other);
		~Span();
		Span &operator=(const Span &other);
		void addNumber(int value);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		class ArrayFullException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Array is full and can't add another number!");
			}
		};

		class NoSpanPossible : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("No span possible because there not enough number in array");
			}
		};
};