/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:06:58 by jonascim          #+#    #+#             */
/*   Updated: 2023/04/28 08:06:58 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_type = nullptr;
	std::cout << "Human B " << this->_name << " was created" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Human B was destroyed" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_type = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	if (this->_type == nullptr)
		{
			std::cout << "You have a NULL weapon" << std::endl;
			return ;
		}
	std::cout << this->_name << " attacks with his " << (*_type).getType() << std::endl;
	return ;
}
