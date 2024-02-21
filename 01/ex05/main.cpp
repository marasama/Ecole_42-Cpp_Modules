/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:51:20 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 13:03:08 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    std::string input;
    Harl        harl;

    do
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit"));
    return (0);
}
