
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T min(T &first, T &second)
{
    if (first > second)
        return (second);
    return (first);
}

template <typename ZORT>
ZORT max(ZORT &first, ZORT &second)
{
    if (first < second)
        return (second);
    return (first);
}

template <typename ZART>
void swap(ZART &first, ZART &second)
{
    ZART tmp = first;
    first = second;
    second = tmp;
}

#endif