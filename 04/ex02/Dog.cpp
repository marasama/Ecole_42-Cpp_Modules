/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:53:56 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/23 00:15:53 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "|Dog: " << this->type << "| Default costructor called" << std::endl;
	this->food = new Brain;
}

Dog::Dog(const Dog& otherDog)
{
	std::cout << "|Dog: " << this->type << "| Copy costructor called" << std::endl;
	this->food = new Brain(*(otherDog.food));
	(*this) = otherDog;
}


Dog &Dog::operator=(const Dog& otherDog)
{
	std::cout << "|Dog: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherDog.type;
	for (int i = 0; i < 100; i++)
	{
		this->food->ideas[i] = otherDog.food->ideas[i];
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->food;
	std::cout << "|Dog: " << this->type << "| Default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "|Dog: " << this->type << "| Whaf whaf" << std::endl;
}
