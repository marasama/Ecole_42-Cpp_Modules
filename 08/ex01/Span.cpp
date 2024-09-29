#include "Span.hpp"

Span::Span(unsigned int n)
{
	_size = n;
	_array.reserve(n);
}

Span::Span(const Span &other)
{
	_size = other._size;
	_array = other._array;
}

Span &Span::operator=(const Span &other)
{
	_size = other._size;
	_array = other._array;
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int value)
{
	if (_array.size() >= _size)
		throw Span::ArrayFullException();
	_array.push_back(value);
}

unsigned int Span::shortestSpan()
{
	if (_array.size() <= 1)
		throw Span::NoSpanPossible();
	std::sort(_array.begin(), _array.end());
	int shortest = _array[1] - _array[0];
	for (long unsigned int i = 1; i < _array.size() - 1; i++)
	{
		int tempSpan = _array[i + 1] - _array[i];
		if (tempSpan < shortest)
			shortest = tempSpan;
	}
	return (shortest);
}
unsigned int Span::longestSpan()
{
	if (_array.size() <= 1)
		throw Span::NoSpanPossible();
	std::sort(_array.begin(), _array.end());
	return (_array[_array.size() - 1] - _array[0]);
}