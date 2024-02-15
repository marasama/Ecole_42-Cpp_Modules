/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:48:25 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 10:43:18 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weap)
{
	type = weap;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

const std::string &Weapon::getType(void)
{
	std::string &a = type;
	return(a);
}
