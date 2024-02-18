/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:46:38 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/18 14:46:38 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string str)
{
    t_func funcs[] {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4 && levels[i].compare(level); i++);
    if (i < 4)
        (*funcs[i])();
    else
        std::cout << "Please enter a correct parameter" << std::endl;
}