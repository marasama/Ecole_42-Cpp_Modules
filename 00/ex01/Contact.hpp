/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 03:36:26 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 03:37:33 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNum;
		std::string	darkSecret;
		short		index;
	public:
		void createContact(short a);
		void printContact(void);
		void printFullContact(void);
};

#endif
