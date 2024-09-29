/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:42:02 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/20 15:01:31 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	try
	{
		Zombie *asd = zombieHorde(5, "asdf");
		for (int i = 0; i < 5; i++)
		{
			asd[i].announce();
		}
		delete [] asd;
	}
	catch (const std::bad_alloc& e)
	{
		std::cerr << "Memory allocation error:" << e.what() << std::endl;
		return (1);
	}
	return (0);
}
