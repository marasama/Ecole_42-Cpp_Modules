/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:35:42 by adurusoy          #+#    #+#             */
/*   Updated: 2024/04/26 22:59:57 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();

        delete j;
        delete i;
        const int numAnimals = 4;
        Animal* animals[numAnimals];

        for (int i = 0; i < numAnimals / 2; ++i) {
            animals[i] = new Dog();
        }
        for (int i = numAnimals / 2; i < numAnimals; ++i) {
            animals[i] = new Cat();
        }
        for (int i = 0; i < numAnimals; ++i) {
            animals[i]->makeSound();
        }
        for (int i = 0; i < numAnimals; ++i) {
            delete animals[i];
        }
    }
    return 0;
}
