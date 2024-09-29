/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:24:38 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:31:28 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "<none>";
	std::cout << "|WrongAnimal: " << this->type << "| Default costructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string WrongAnimalType)
{
	std::cout << "|WrongAnimal: " << WrongAnimalType << "| Default costructor called" << std::endl;
	this->type = WrongAnimalType;
}

WrongAnimal::WrongAnimal(const WrongAnimal& otherWrongAnimal)
{
	std::cout << "|WrongAnimal: " << this->type << "| Copy costructor called" << std::endl;
	(*this) = otherWrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& otherWrongAnimal)
{
	std::cout << "|WrongAnimal: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherWrongAnimal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "|WrongAnimal: " << this->type << "| Default destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "|WrongAnimal: " << this->type << "| making wrong animal sounds" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string newType)
{
	this->type = newType;
}
