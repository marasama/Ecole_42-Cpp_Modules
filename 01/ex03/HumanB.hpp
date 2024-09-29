/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:49:18 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/16 18:37:56 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon *weap;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weap);
		void setName(std::string name);
		void attack(void);
};

#endif
