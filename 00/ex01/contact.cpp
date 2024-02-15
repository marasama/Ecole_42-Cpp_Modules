/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:52:09 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 03:37:54 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::createContact(short a)
{
	index = a;
	std::cout << "Enter contact's first name: ";
	std::cin >> firstName;
	std::cout << std::endl << "Enter contact's last name: ";
	std::cin >> lastName;
	std::cout << std::endl << "Enter contact's nickname: ";
	std::cin >> nickName;
	std::cout << std::endl << "Enter contact's phone number: ";
	std::cin >> phoneNum;
	std::cout << std::endl << "Enter contact's DARKEST SECRET: ";
	std::cin >> darkSecret;
	std::cout << std::endl << "Adding " << firstName + " " + lastName << " is completed." << std::endl;
};

void Contact::printContact(void)
{
	short a = 0;
	std::cout << "|" << index + 1 << "\t   |";
	while (a < 9 && firstName[a])
		std::cout <<  firstName[a++];
	if (a == 9)
		std::cout << ".";
	else
	{
		while (a != 10)
		{
			std::cout << " ";
			a++;
		}
	}
	std::cout << "|";
	a = 0;
	while (a < 9 && lastName[a])
		std::cout <<  lastName[a++];
	if (a == 9)
		std::cout << ".";
	else
	{
		while (a != 10)
		{
			std::cout << " ";
			a++;
		}
	}
	std::cout << "|";
	a = 0;
	while (a < 9 && nickName[a])
		std::cout <<  nickName[a++];
	if (a == 9)
		std::cout << ".";
	else
	{
		while (a != 10)
		{
			std::cout << " ";
			a++;
		}
	}
	std::cout << "|" << std::endl;
};

void Contact::printFullContact(void)
{
		std::cout << "\e[35mFirst Name: \e[0m" + firstName << std::endl;
		std::cout << "\e[35mLast Name: \e[0m" + lastName << std::endl;
		std::cout << "\e[35mNick Name: \e[0m" + nickName << std::endl;
		std::cout << "\e[35mPhone Number: \e[0m" + phoneNum << std::endl;
		std::cout << "\e[35mDarkest Secret: \e[0m" + darkSecret << std::endl << std::endl;
};
