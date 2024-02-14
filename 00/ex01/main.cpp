/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:24:14 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/13 18:10:37 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string a;
	phonebook book(0);
	int short size = 0;
	int short index = 0;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "|\e[32m\t\t Options\t\t\e[0m|" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "|\e[33m1-ADD (Add a new contact to phonebook)\t\e[0m|" << std::endl;
	std::cout << "|\e[34m2-SEARCH (Inspect your contacts)\t\e[0m|" << std::endl;
	std::cout << "|\e[35m3-EXIT (Exit the program)\t\t\e[0m|" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	while (1)
	{
		std::cout << "\e[31mEnter a command number: \e[0m";
		std::cin >> a;
		if (a == "1")
		{
			std::cout << "You have chosen the ADD option.\e[0m" << std::endl;
			if (size != 8)
				size = index + 1;
			if (index == 7)
				index = 0;
			book.addContact();
			index++;
		}
		else if (a == "2")
		{
			std::cout << "\e[34mYou have chosen the SEARCH option.\e[0m" << std::endl;
			book.searchContact(size);
		}
		else if (a == "3")
		{
			std::cout << "\e[35mYou have chosen the EXIT option.\e[0m" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "\e[30mPlease chose a correct option!\e[0m" << std::endl;
		}
	}
}
