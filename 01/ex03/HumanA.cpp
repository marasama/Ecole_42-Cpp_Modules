/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:38:13 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/16 17:28:57 by adurusoy         ###   ########.fr       */
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
	this->weap = weap;
}

void HumanA::setWeapon(Weapon weap)
{
	this->weap = weap;
}
