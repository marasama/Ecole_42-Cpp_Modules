#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename TEMPLT>
void iter(TEMPLT arr[], int size, void (* prnt_fnc)(TEMPLT &a))
{
    for (int i = 0; i < size; i++)
    {
        prnt_fnc(arr[i]);
    }
}

template<typename TEMPLT>
void print_func(TEMPLT &a)
{
    std::cout << a << std::endl;
}

#endif