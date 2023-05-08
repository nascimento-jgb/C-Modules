/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:23:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/08 10:25:10 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap("defaulDT_CT");
	this->_name = "defaultDT";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called initialized." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), FragTrap(name, 100, 30), ScavTrap(name, 50)
{
	_name = name;
	std::cout << "DiamondTrap constructor called and variables initialized." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src._name + "_clap_trap"), FragTrap(src._name), ScavTrap(src._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->_attackDamage = src.getAttackDamage();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy)
{
	this->_name = cpy._name + "_clap_trap";
	this->_attackDamage = cpy.getAttackDamage();
	this->_hitPoints = cpy.getHitPoints();
	this->_energyPoints = cpy.getEnergyPoints();
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor being called." << std::endl;
	return ;
}

//Member functions

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am the DiamondTrap name " << this->_name << " created based on " \
		<< ClapTrap::_name << " ClapTrap name." << std::endl;
}
