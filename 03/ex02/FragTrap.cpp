/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:10:46 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 18:39:58 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "|FragTrap: " << "<none>" << "| is created!" << std::endl;
	this->_name = "<none>";
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "|FragTrap: " << name << "| is created!" << std::endl;
	this->_name = name;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap& otherFrag)
{
	std::cout << "|FragTrap: " << this->_name << "| copy constructor called!" << std::endl;
	*this = otherFrag;
}

FragTrap::~FragTrap()
{
	std::cout << "|FragTrap: " << this->_name << "| destructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& otherFrag)
{
	this->_name = otherFrag._name;
	this->_attackDamage = otherFrag._attackDamage;
	this->_energyPoints = otherFrag._energyPoints;
	this->_hitPoints = otherFrag._hitPoints;
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "|FragTrap: " << this->_name << "| Let's make high fives and be happy!" << std::endl;
}
