/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:06:29 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 18:46:50 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "|ClapTrap: " << "<none>" << "| is created!" << std::endl;
	this->_name = "<none>";
	this->_attackDamage = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "|ClapTrap: " << name << "| is created!" << std::endl;
	this->_name = name;
	this->_attackDamage = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
}
ClapTrap::ClapTrap(const ClapTrap& otherClap)
{
	std::cout << "|ClapTrap: " << this->_name << "| copy constructor called!" << std::endl;
	*this = otherClap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "|ClapTrap: " << this->_name << "| destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& otherClap)
{
	this->_name = otherClap._name;
	this->_attackDamage = otherClap._attackDamage;
	this->_energyPoints = otherClap._energyPoints;
	this->_hitPoints = otherClap._hitPoints;
	return (*this);
}

void ClapTrap::attack(std::string const& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "|ClapTrap: " << this->_name << "| is dead!" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "|ClapTrap :" << this->_name << "| does not have enough energy!" << std::endl;
		return;
	}
	std::cout << "|ClapTrap: " << this->_name << "| attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "|ClapTrap: " << this->_name << "| is dead!" << std::endl;
		return ;
	}
	else if (this->_hitPoints <= amount)
	{
		std::cout << "|ClapTrap: " << this->_name << "| is died!" << std::endl;
		this->_hitPoints -= amount;
		return ;
	}
	std::cout << "|ClapTrap: " << this->_name << "| takes " << amount << " damage!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "|ClapTrap: " << this->_name << "| is dead!" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= amount)
	{
		std::cout << "|ClapTrap: " << this->_name << "| does not have enough energy!" << std::endl;
		return;
	}
	std::cout << "|ClapTrap: " << this->_name << "| repairs " << amount << " hit points!" << std::endl;
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
}
