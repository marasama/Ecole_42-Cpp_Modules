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

int main( int ac, char **av)
{

    if (ac != 2)
        std::cout << "Please give some topic to talk about" << std::endl;
    else
    {
        Harl        harl;

        harl.complain(av[1]);
    }
    return (0);
}