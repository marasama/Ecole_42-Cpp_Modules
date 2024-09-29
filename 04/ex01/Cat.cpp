/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:45:47 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/23 00:01:53 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "|Cat: " << this->type << "| Default costructor called" << std::endl;
	this->food = new Brain;
}

Cat::Cat(const Cat& otherCat)
{
	std::cout << "|Cat: " << this->type << "| Copy costructor called" << std::endl;
	this->food = new Brain(*(otherCat.food));
	(*this) = otherCat;
}


Cat &Cat::operator=(const Cat& otherCat)
{
	std::cout << "|Cat: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherCat.type;
	for (int i = 0; i < 100; i++)
	{
		this->food->ideas[i] = otherCat.food->ideas[i];
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->food;
	std::cout << "|Cat: " << this->type << "| Default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "|Cat: " << this->type << "| Meow meow" << std::endl;
}

