/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:17:24 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/08 10:03:18 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap constructor called initialized." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name, int hp, int attack) : ClapTrap(name)
{
	_hitPoints = hp;
	_attackDamage = attack;
	std::cout << "FragTrap special constructor called and variables initialized." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor called and variables initialized." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &cpy)
{
	this->_name = cpy.getName();
	this->_attackDamage = cpy.getAttackDamage();
	this->_hitPoints = cpy.getHitPoints();
	this->_energyPoints = cpy.getEnergyPoints();
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap being called." << std::endl;
	return ;
}

//Member functions

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Hey, it's time to give a high five! " << std::endl;
	std::cout << "High Five to your buddy " << this->_name << ", anyone? No? " << std::endl;
	return ;
}
