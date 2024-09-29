/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:17:28 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 08:40:05 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	(void)0;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": " << "I'm dying!!!!..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}


