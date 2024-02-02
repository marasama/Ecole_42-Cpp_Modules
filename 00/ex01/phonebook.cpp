/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:55:55 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 16:26:24 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class phonebook
{
	private:
		contact contacts[8];
	public:
		void addContact(void)
		{
			static short a = 0;
			if (a == 8)
				a = 0;
			contacts[a] = contact::createContact();
			a++;
		}
};

