/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:14:32 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/20 14:19:30 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(std::string str);
		~Zombie(void);
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
