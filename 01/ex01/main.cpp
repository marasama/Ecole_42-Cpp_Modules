/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:42:02 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 08:59:04 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *asd = zombieHorde(10, "asdf");
	for (int i = 0; i < 10; i++)
	{
		asd[i].announce();
	}
	delete [] asd;
}
