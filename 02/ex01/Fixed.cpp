/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:06:36 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 07:23:25 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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
Fixed::Fixed(const int raw) : _fixInt(raw << _fracBits)
{
	std::cout << "Int constuctor called" << std::endl;
}

Fixed::Fixed(const float raw) : _fixInt(std::roundf(raw * (1 << _fracBits)))
{
	std::cout << "Float constuctor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& newFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newFixed)
		this->_fixInt = newFixed._fixInt;
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

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixInt) / (1 << _fracBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixInt >> _fracBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &i)
{
    out << i.toFloat();
    return out;
}

