/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:54:15 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 17:13:35 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{
	private:
		Brain *food;
	public:
		Dog();
		Dog(const Dog& otherDog);
		Dog &operator=(const Dog& otherDog);
		~Dog();

		void makeSound(void) const;
};


#endif
