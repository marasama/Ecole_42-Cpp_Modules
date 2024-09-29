#include <iostream>

template<typename T>
void iter(T array[], int size, void (* prnt_func)(const T &zort))
{
	for (int i = 0; i < size; i++)
	{
		prnt_func(array[i]);
	}
}

template<typename T>
void print_func(const T &zort)
{
	std::cout << zort << std::endl;
}