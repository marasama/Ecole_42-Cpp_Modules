/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:24:41 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:00:42 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "<none>";
	std::cout << "|Animal: " << this->type << "| Default costructor called" << std::endl;
}

Animal::Animal(std::string animalType)
{
	std::cout << "|Animal: " << animalType << "| Default costructor called" << std::endl;
	this->type = animalType;
}

Animal::Animal(const Animal& otherAnimal)
{
	std::cout << "|Animal: " << this->type << "| Copy costructor called" << std::endl;
	(*this) = otherAnimal;
}


Animal &Animal::operator=(const Animal& otherAnimal)
{
	std::cout << "|Animal: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherAnimal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "|Animal: " << this->type << "| Default destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "|Animal: " << this->type << "| making sounds" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::setType(std::string newType)
{
	this->type = newType;
}
