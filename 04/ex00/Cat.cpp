/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:45:47 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:02:14 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->type = "Cat";
	std::cout << "|Cat: " << this->type << "| Default costructor called" << std::endl;
}

Cat::Cat(const Cat& otherCat)
{
	std::cout << "|Cat: " << this->type << "| Copy costructor called" << std::endl;
	(*this) = otherCat;
}


Cat &Cat::operator=(const Cat& otherCat)
{
	std::cout << "|Cat: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherCat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "|Cat: " << this->type << "| Default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "|Cat: " << this->type << "| Meow meow" << std::endl;
}

