/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:07:40 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 06:55:23 by adurusoy         ###   ########.fr       */
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
	Fixed &operator=(const Fixed& newFixed);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif
