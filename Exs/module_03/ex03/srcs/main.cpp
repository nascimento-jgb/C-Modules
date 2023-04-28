/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:38:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/04/22 09:05:09 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main ()
{
	ClapTrap	instance("TEST");
	// ScavTrap	instance2("TEST2");
	// FragTrap	instance3("TEST3");
	DiamondTrap	instance4("TEST4");

	// instance.attack("enemy");
	// instance.setAttackDamage(1);
	// instance.attack("another enemy");
	// std::cout << instance.getEnergyPoints() << std::endl;
	// instance.beRepaired(5);
	// std::cout << instance.getEnergyPoints() << std::endl;

	// instance2.attack("enemy");
	// std::cout << instance2.getEnergyPoints() << std::endl;
	// instance2.beRepaired(2);
	// std::cout << instance2.getHitPoints() << std::endl;
	// instance2.attack("another enemy");
	// instance2.guardGate();
	// std::cout << instance2.getEnergyPoints() << std::endl;
	// instance3.getAttackDamage();
	// instance3.highFiveGuys();
	std::cout << instance4.getName() << std::endl;
	std::cout << instance4.getAttackDamage() << std::endl;
	std::cout << instance4.getEnergyPoints() << std::endl;
	std::cout << instance4.getHitPoints() << std::endl;
	return (0);
}
