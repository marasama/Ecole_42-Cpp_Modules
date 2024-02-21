/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:06:31 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/21 18:37:01 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	std::string name;

	std::cout << "Please enter name for Clap: ";
	std::cin >> name;
	ClapTrap clap(name);

	std::cout << "Please enter name for Scav: ";
	std::cin >> name;
	ScavTrap scav(name);

	std::cout << "Please enter name for Frag: ";
	std::cin >> name;
	FragTrap frag(name);
	std::cout << "-----ClapTrap-----" << std::endl;
	for(int i = 0; i < 2; i++)
		clap.attack("orc");
	clap.takeDamage(9);
	clap.beRepaired(24);
	clap.takeDamage(1);
	clap.beRepaired(1);
	std::cout << "-----ScavTrap-----" << std::endl;
	for(int i = 0; i < 4; i++)
		scav.attack("troll");
	scav.takeDamage(11);
	scav.beRepaired(45);
	scav.takeDamage(1);
	scav.beRepaired(1);
	scav.guardGate();
	std::cout << "-----FragTrap-----" << std::endl;
	for(int i = 0; i < 8; i++)
		frag.attack("fairy");
	frag.takeDamage(11);
	frag.beRepaired(95);
	frag.takeDamage(2);
	frag.beRepaired(6);
	frag.highFiveGuys();
    return (0);
}
