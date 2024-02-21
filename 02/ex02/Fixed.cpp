/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:06:36 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 09:05:14 by adurusoy         ###   ########.fr       */
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

bool Fixed::operator<(const Fixed& otherFixed) const
{
	if (this->_fixInt < otherFixed._fixInt)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& otherFixed) const
{
	if (this->_fixInt > otherFixed._fixInt)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& otherFixed) const
{
	if (this->_fixInt <= otherFixed._fixInt)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& otherFixed) const
{
	if (this->_fixInt >= otherFixed._fixInt)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& otherFixed) const
{
	if (this->_fixInt == otherFixed._fixInt)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& otherFixed) const
{
	if (this->_fixInt != otherFixed._fixInt)
		return (true);
	return (false);
}
Fixed	Fixed::operator+(const Fixed &otherFixed)
{
	return (Fixed(this->toFloat() + otherFixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &otherFixed)
{
	return (Fixed(this->toFloat() - otherFixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &otherFixed)
{
	return (Fixed(this->toFloat() / otherFixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &otherFixed)
{
	return (Fixed(this->toFloat() * otherFixed.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	++this->_fixInt;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->_fixInt;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	--this->_fixInt;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	--this->_fixInt;
	return (temp);
}

Fixed &Fixed::min(Fixed& a, Fixed&b)
{
	if (a._fixInt < b._fixInt)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed& a, const Fixed&b)
{
	if (a._fixInt < b._fixInt)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed& a, Fixed&b)
{
	if (a._fixInt > b._fixInt)
		return (a);
	return (b);
}
const Fixed &Fixed::max(const Fixed& a, const Fixed&b)
{
	if (a._fixInt > b._fixInt)
		return (a);
	return (b);
}
