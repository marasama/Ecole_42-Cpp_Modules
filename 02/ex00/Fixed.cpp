/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:06:36 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 06:55:23 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixInt = 0;
}

Fixed::Fixed(const Fixed& newFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = newFixed;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& newFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newFixed)
		this->_fixInt = newFixed.getRawBits();
	return *this;
}

int Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixInt);
}

void Fixed::setRawBits (int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixInt = raw;
}
