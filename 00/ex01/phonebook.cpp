/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:55:55 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 18:58:13 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phonebook::addContact(short &a)
{
	contacts[a].createContact(a);
	a++;
};

void phonebook::searchContact(short size)
{
	std::cout << "|Index     |" << "First Name|" << "Last Name |" << "Nickname  |" << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;
	for(int a = 0; a < size; a++)
	{
		contacts[a].printContact();
	}
}
