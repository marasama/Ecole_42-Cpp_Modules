/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:49:46 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/16 18:27:35 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << weap.getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	setWeapon(weap);
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weap = weap;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}
