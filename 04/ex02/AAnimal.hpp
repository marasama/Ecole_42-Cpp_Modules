/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:18:49 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 17:24:30 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string animalType);
		AAnimal(const AAnimal& otherAnimal);
		AAnimal &operator=(const AAnimal& otherAnimal);
		virtual ~AAnimal();

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		void setType(std::string newType);
};



#endif
