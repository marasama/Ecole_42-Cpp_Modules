/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:18:49 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:28:58 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string animalType);
		Animal(const Animal& otherAnimal);
		Animal &operator=(const Animal& otherAnimal);
		virtual ~Animal();

		virtual void makeSound(void) const;
		std::string getType(void) const;
		void setType(std::string newType);
};



#endif
