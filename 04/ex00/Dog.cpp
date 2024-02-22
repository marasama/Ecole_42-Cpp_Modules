/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:53:56 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:02:38 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->type = "Dog";
	std::cout << "|Dog: " << this->type << "| Default costructor called" << std::endl;
}

Dog::Dog(const Dog& otherDog)
{
	std::cout << "|Dog: " << this->type << "| Copy costructor called" << std::endl;
	(*this) = otherDog;
}


Dog &Dog::operator=(const Dog& otherDog)
{
	std::cout << "|Dog: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherDog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "|Dog: " << this->type << "| Default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "|Dog: " << this->type << "| Whaf whaf" << std::endl;
}
