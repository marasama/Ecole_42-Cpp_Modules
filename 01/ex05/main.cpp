/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:51:20 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/18 14:51:20 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    std::string input;
    Harl        harl;

    std::cin >> input;
    while (input.compare("exit"))
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    }
    return 1;
}