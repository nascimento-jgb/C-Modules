/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 08:14:42 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/08 10:03:17 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

// Canonical form
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap constructor called initialized." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name, int energy) : ClapTrap(name)
{
	_energyPoints = energy;
	std::cout << "ScavTrap special constructor called and variables initialized." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructor called and variables initialized." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy)
{
	this->_name = cpy.getName();
	this->_attackDamage = cpy.getAttackDamage();
	this->_hitPoints = cpy.getHitPoints();
	this->_energyPoints = cpy.getEnergyPoints();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap being called." << std::endl;
	return ;
}

//Member functions

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << \
			", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ScavTrap doensn't has energy points to attack" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in guard gate mode!" << std::endl;
	return ;
}
