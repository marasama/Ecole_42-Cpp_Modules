/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:44:06 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:55:51 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	private:
		Brain *food;
	public:
		Cat();
		Cat(const Cat& otherCat);
		Cat &operator=(const Cat& otherCat);
		~Cat();

		void makeSound(void) const;
};


#endif
