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
