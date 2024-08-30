/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 06:01:36 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/30 06:05:00 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() 
{
    std::cout << "Base constructor" << std::endl;
}

Base::Base(const Base &other)
{
    *this = other;
}

Base &Base::operator=(const Base &other)
{
    (void)other;
    return (*this);
}

Base::~Base() 
{
    std::cout << "Base destructor" << std::endl;
}

Base *generate(void)
{
    srand(time(0));
    int num = rand() % 3;
    Base *ptr = NULL;

    try
    {
        if (num == 0)
            ptr = dynamic_cast<Base*>(new A);
        else if (num == 1)
            ptr = dynamic_cast<Base*>(new B);
        else if (num == 2)
            ptr = dynamic_cast<Base*>(new C);
        std::cout << ptr << std::endl;
        return (ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (NULL);
    }
}

void identify(Base *p)
{
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void identify(Base &p)
{
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(&p))
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
