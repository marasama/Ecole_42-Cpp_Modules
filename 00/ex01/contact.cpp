/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:52:09 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 16:25:16 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkSecret;
	public:
		contact createContact(void) // Add's new contact
		{
			std::cout << "Enter contact's first name:";
			std::cin >> firstName;
			std::cout << std::endl << "Enter contact's last name:";
			std::cin >> lastName;
			std::cout << std::endl << "Enter contact's nickname:";
			std::cin >> nickName;
			std::cout << std::endl << "Enter contact's phone number:";
			std::cin >> phoneNum;
			std::cout  << std::endl << "Enter contact's DARKEST SECRET:";
			std::cin >> darkSecret;
			std::cout  << std::endl;
		}
};
