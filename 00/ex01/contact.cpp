/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:52:09 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 17:25:48 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void contact::createContact(void)
{
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
