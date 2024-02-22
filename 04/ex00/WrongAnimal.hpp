/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:22:50 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:46:21 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string animalType);
		WrongAnimal(const WrongAnimal& otherAnimal);
		WrongAnimal &operator=(const WrongAnimal& otherAnimal);
		virtual ~WrongAnimal();

		void makeSound(void) const;
		std::string getType(void) const;
		void setType(std::string newType);
};
