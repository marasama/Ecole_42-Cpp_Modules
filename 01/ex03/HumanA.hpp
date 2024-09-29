/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:55:39 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/20 15:02:04 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon &weap;
	public:
		HumanA(std::string name, Weapon &weap);
		void setWeapon(Weapon weap);
		void attack(void);
		void setName(std::string name);
};

#endif
