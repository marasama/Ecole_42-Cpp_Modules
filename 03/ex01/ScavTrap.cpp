/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:06:00 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 18:15:32 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "|ScavTrap: " << "<none>" << "| is created!" << std::endl;
	this->_name = "<none>";
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "|ScavTrap: " << name << "| is created!" << std::endl;
	this->_name = name;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap& otherScav)
{
	std::cout << "|ScavTrap: " << this->_name << "| copy constructor called!" << std::endl;
	*this = otherScav;
}

ScavTrap::~ScavTrap()
{
	std::cout << "|ScavTrap: " << this->_name << "| destructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& otherScav)
{
	this->_name = otherScav._name;
	this->_attackDamage = otherScav._attackDamage;
	this->_energyPoints = otherScav._energyPoints;
	this->_hitPoints = otherScav._hitPoints;
	return (*this);
}

void ScavTrap::attack(std::string const& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "|ScavTrap: " << _name << "| is dead!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "|ScavTrap :" << _name << "| does not have enough energy!" << std::endl;
		return;
	}
	std::cout << "|ScavTrap: " << _name << "| attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void ScavTrap::guardGate(void)
{
	std::cout << "|ScavTrap: " << _name << "| is now in GATE KEEPER MODE" << std::endl;
}
