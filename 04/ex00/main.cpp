/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:35:42 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/22 13:28:24 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << "--------------Correct One--------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
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
