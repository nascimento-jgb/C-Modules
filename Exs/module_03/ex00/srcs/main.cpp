/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:38:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/27 09:10:13 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main ()
{
	ClapTrap	instance("TEST");

	instance.attack("enemy");
	instance.setAttackDamage(1);
	instance.attack("another enemy");
	std::cout << instance.getEnergyPoints() << std::endl;
	instance.beRepaired(5);
	std::cout << instance.getEnergyPoints() << std::endl;

	return (0);
}
