/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:24:14 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 18:39:27 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	int short a;
	phonebook book;
	int short size = 0;
	int short index = 0;
	std::cout << "-----------------" << std::endl;
	std::cout << "|Your options\t|" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << "|1-ADD\t\t|" << std::endl;
	std::cout << "|2-SEARCH\t|" << std::endl;
	std::cout << "|3-EXIT\t\t|" << std::endl;
	std::cout << "-----------------" << std::endl;
	while (1)
	{
		std::cout << "Enter a command number:";
		std::cin >> a;
		if (a == 1)
		{
			std::cout << "You have chosen the ADD option." << std::endl;
			if (size != 8)
				size = index + 1;
			if (index == 7)
				index = 0;
			book.addContact(index);
			index++;
		}
		else if (a == 2)
		{
			std::cout << "You have chosen the SEARCH option." << std::endl;
			book.searchContact(size);
		}
		else if (a == 3)
		{
			std::cout << "You have chosen the EXIT option." << std::endl;
			return (0);
		}
		else
			std::cout << "Please chose a correct option!" << std::endl;
	}
}
