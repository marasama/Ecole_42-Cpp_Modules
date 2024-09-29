/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:24:41 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 17:05:56 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "<none>";
	std::cout << "|Animal: " << this->type << "| Default costructor called" << std::endl;
}

AAnimal::AAnimal(std::string animalType)
{
	std::cout << "|Animal: " << animalType << "| Default costructor called" << std::endl;
	this->type = animalType;
}

AAnimal::AAnimal(const AAnimal& otherAnimal)
{
	std::cout << "|Animal: " << this->type << "| Copy costructor called" << std::endl;
	(*this) = otherAnimal;
}


AAnimal &AAnimal::operator=(const AAnimal& otherAnimal)
{
	std::cout << "|Animal: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherAnimal.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "|Animal: " << this->type << "| Default destructor called" << std::endl;
}

void AAnimal::makeSound(void) const
{
	std::cout << "|Animal: " << this->type << "| making sounds" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void AAnimal::setType(std::string newType)
{
	this->type = newType;
}
