/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:55:55 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/13 18:08:43 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phonebook::addContact(void)
{
	contacts[index].createContact(index);
	index++;
};

void phonebook::searchContact(short size)
{
	std::cout << "|\e[35m   Index  \e[0m|" << "\e[34mFirst Name\e[0m|" << "\e[33mLast Name \e[0m|" << " \e[32mNickname \e[0m|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for(int a = 0; a < size; a++)
	{
		contacts[a].printContact();
	}
}
