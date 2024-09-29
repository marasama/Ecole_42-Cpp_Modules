/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:35:42 by adurusoy          #+#    #+#             */
/*   Updated: 2024/04/27 06:16:28 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

int main()
{
	{
		std::cout << "--------------Correct One--------------" << std::endl;
		Dog* j = new Dog();
		Cat* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		delete i;
		delete j;
	}
	{
		std::cout << "--------------Wrong One--------------" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		delete j;
		delete meta;
	}
	return 0;
}
