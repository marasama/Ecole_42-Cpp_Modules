/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:49:46 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/16 18:40:28 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
	if (this->weap->getType() != "")
		std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their empty hands" << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}
