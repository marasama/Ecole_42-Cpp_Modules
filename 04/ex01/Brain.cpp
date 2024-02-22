/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:40:09 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 15:30:06 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->ideas[i] = "Different Idea";
		else
			this->ideas[i] = "Another Different Idea";
	}
}

Brain::Brain(const Brain& otherBrain)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = otherBrain;
}

Brain &Brain::operator=(const Brain& otherBrain)
{
	std::cout << "Brain: Operator overload called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = otherBrain.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}
