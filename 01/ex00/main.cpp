/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:42:02 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/20 14:22:54 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	try
	{
		Zombie *zombi = newZombie("zombi");
		zombi->announce();
		delete zombi;
		randomChump("zort");
	}
	catch (const std::bad_alloc& e)
	{
		std::cerr << "Memory allocation error:" << e.what() << std::endl;
		return (1);
	}
	return (0);
}
