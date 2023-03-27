/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:10:13 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/27 09:07:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

// Canonical form
ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor called initialized." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called and variables initialized." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const *ct)
{
	*this = ct;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &cpy)
{
	if (this != &cpy)
		this->_name = cpy.getName();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor being called." << std::endl;
	return ;
}

//Getter's and Setter's
std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
	return ;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints(unsigned int hp)
{
	this->_hitPoints = hp;
	return ;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setAttackDamage(unsigned int value)
{
	this->_attackDamage = value;
	return ;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

void	ClapTrap::setEnergyPoints(unsigned int value)
{
	this->_energyPoints = value;
	return ;
}

//Public Member Functions

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << \
			", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap doensn't has energy points to attack" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap took damage equals " << amount;
		std::cout << " remaining with " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap doensn't has hit points remaining" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap was repaired " << amount;
		std::cout << " remaining with " << this->_hitPoints << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap doensn't has energy points to be repaired" << std::endl;
	return ;
}
