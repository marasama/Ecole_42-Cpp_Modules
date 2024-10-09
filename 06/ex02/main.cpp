/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 05:57:40 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/30 06:05:10 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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
            std::cout << "It's a class A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "It's a class B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "It's a class C" << std::endl;
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
        Base a = dynamic_cast<A&>(p);
        std::cout << "It's a class A" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not class A " << e.what() << '\n';
    }

    try
    {
        Base b = dynamic_cast<B&>(p);
        std::cout << "It's a class B" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not class B " << e.what() << '\n';
    }

    try
    {
        Base c = dynamic_cast<C&>(p);
        std::cout << "It's a class C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not class C " << e.what() << '\n';
    }
    
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
    {
        std::cerr << "Error!" << std::endl;
        return(-1);
    }
    Base *ptr;

    ptr = generate();
    
    std::cout << "Base pointer: " << ptr << std::endl;

    identify(ptr);

    identify(*ptr);

    delete ptr;
}
