#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>


template <typename T>
int easyfind(const T& container, int search)
{
    typename T::const_iterator iter = std::find(container.begin(), container.end(), search);

    if (iter != container.end())
        return std::distance(container.begin(), iter);
    return (-1);
}