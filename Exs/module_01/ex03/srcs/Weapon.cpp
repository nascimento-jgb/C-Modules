/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:45:42 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 11:24:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	this->_type = weapon_type;
	return ;
}

Weapon::~Weapon(void)
{
	return;
}

std::string	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string	type)
{
	this->_type = type;
	return ;
}
