/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:38:13 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 10:54:41 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}


HumanA::HumanA(std::string zart, Weapon zort)
{
	this->name = name;
	this->weap = weap;
}