/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 02:47:38 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/30 02:49:40 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

ScalarConvertor::ScalarConvertor()
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConvertor::ScalarConvertor(const ScalarConvertor &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		// copy attributes here
	}
	return *this;
}

ScalarConvertor::~ScalarConvertor()
{
	std::cout << "Destructor called" << std::endl;
}