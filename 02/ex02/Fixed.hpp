/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:07:40 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 09:05:27 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _fixInt;
		static const int _fracBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& newFixed);
		Fixed(const int raw);
		Fixed(const float raw);
		Fixed &operator=(const Fixed& newFixed);
		~Fixed(void);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		// Comprasion Operator Overloads
		bool operator<(const Fixed& otherFixed) const;
		bool operator>(const Fixed& otherFixed) const;
		bool operator<=(const Fixed& otherFixed) const;
		bool operator>=(const Fixed& otherFixed) const;
		bool operator==( const Fixed& otherFixed) const;
		bool operator!=( const Fixed& otherFixed) const;
		// Arithmetic Operator Overload
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		Fixed	operator+(const Fixed &otherFixed);
		Fixed	operator-(const Fixed &otherFixed);
		Fixed	operator*(const Fixed &otherFixed);
		Fixed	operator/(const Fixed &otherFixed);
		// functions
		static Fixed &min(Fixed& a, Fixed&b);
		static const Fixed &min(const Fixed& a, const Fixed&b);
		static Fixed &max(Fixed& a, Fixed&b);
		static const Fixed &max(const Fixed& a, const Fixed&b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &i);

#endif
