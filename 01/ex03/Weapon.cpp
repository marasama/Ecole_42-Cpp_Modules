/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:48:25 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/16 17:24:31 by adurusoy         ###   ########.fr       */
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
	return(type);
}
