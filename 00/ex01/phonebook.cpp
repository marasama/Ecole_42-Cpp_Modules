/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:55:55 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 03:28:12 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(void)
{
	contacts[index].createContact(index);
	index++;
};

void PhoneBook::searchContact(short size)
{
	std::cout << "|\e[35m   Index  \e[0m|" << "\e[34mFirst Name\e[0m|" << "\e[33mLast Name \e[0m|" << " \e[32mNickname \e[0m|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for(int a = 0; a < size; a++)
	{
		contacts[a].printContact();
	}
}

void PhoneBook::chooseContact(std::string index, short size)
{
	if (index[0] < '0' || index[0] > '9')
	{
		std::cout << "\e[35mEntered an wrong input please try again\e[0m " << std::endl;
		return ;
	}
	if (std::stoi(index) > size || std::stoi(index) - 1 == -1)
	{
		std::cout << "\e[35mEntered an wrong index number please try again\e[0m " << std::endl;
	}
	else
	{
		contacts[std::stoi(index) - 1].printFullContact();
	}
}
