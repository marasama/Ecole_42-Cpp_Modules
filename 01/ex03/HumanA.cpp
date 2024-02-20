/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:38:13 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/20 15:00:40 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weap) : weap(weap)
{
	this->name = name;
}

void HumanA::setWeapon(Weapon weap)
{
	this->weap = weap;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}
