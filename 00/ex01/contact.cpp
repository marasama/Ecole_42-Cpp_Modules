/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:52:09 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 18:59:03 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void contact::createContact(short a)
{
	index = a;
	std::cout << "Enter contact's first name:";
	std::cin >> firstName;
	std::cout << "Enter contact's last name:";
	std::cin >> lastName;
	std::cout << "Enter contact's nickname:";
	std::cin >> nickName;
	std::cout << "Enter contact's phone number:";
	std::cin >> phoneNum;
	std::cout << "Enter contact's DARKEST SECRET:";
	std::cin >> darkSecret;
	std::cout << "Adding " << firstName + " " + lastName << " is completed." << std::endl;
};

void contact::printContact(void)
{
	short a = 0;
	std::cout << "|" << index + 1 << "\t   |";
	while (a < 10 && firstName[a])
		std::cout <<  firstName[a++];
	if (a == 10)
		std::cout << ".";
	else
		std::cout << "\t";
	std::cout << "|";
	a = 0;
	while (a < 10 && lastName[a])
		std::cout <<  lastName[a++];
	if (a == 10)
		std::cout << ".";
	else
		std::cout << "\t ";
	std::cout << "|";
	a = 0;
	while (a < 10 && nickName[a])
		std::cout <<  nickName[a++];
	if (a == 10)
		std::cout << ".";
	else
		std::cout << "\t ";
	std::cout << "|" << std::endl;
};
