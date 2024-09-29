#include "Span.hpp"

int main()
{
	Span a(50);

	a.addNumber(414);
	a.addNumber(313);
	a.addNumber(23);
	a.addNumber(2);

	std::cout << a.longestSpan() << std::endl;
	std::cout << a.shortestSpan() << std::endl;
}