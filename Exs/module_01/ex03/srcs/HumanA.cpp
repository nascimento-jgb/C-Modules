/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:54:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 11:40:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _type(weapon)
{
	std::cout << "Human A " << this->_name << " created with a " << _type.getType() << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << "Human A was destroyed" << std::endl;
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << _type.getType() << std::endl;
	return ;
}
