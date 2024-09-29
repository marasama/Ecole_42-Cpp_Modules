/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:24:14 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 03:38:40 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string a;
	PhoneBook book(0);
	short size = 0;
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
		if (a == "1" || a == "ADD")
		{
			std::cout << "You have chosen the ADD option.\e[0m" << std::endl;
			if (size != 8)
				size = book.index + 1;
			book.addContact();
			if (book.index == 8)
				book.index = 0;
		}
		else if (a == "2" || a == "SEARCH")
		{
			std::cout << "\e[34mYou have chosen the SEARCH option.\e[0m" << std::endl << std::endl;
			book.searchContact(size);
			std::cout << "\e[34mPlease enter an index number: \e[0m";
			std::cin >> a;
			std::cout << std::endl;
			book.chooseContact(a, size);
		}
		else if (a == "3" || a == "EXIT")
		{
			std::cout << "\e[35mYou have chosen the EXIT option.\e[0m" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "\e[30mPlease chose an correct option!\e[0m" << std::endl;
		}
	}
}
