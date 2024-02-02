/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:56:45 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/02 16:24:49 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNum;
		std::string darkSecret;
	public:
		contact createContact(void);
};

class phonebook
{
	private:
		contact contacts[8];
	public:
		void addContact(void);

};

#endif
