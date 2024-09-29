/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:44:06 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 17:15:42 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
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
