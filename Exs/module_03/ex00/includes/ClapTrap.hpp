/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:06:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/25 14:50:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:

		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const *ct);
		ClapTrap &operator=(ClapTrap const &cpy);
		~ClapTrap(void);

		std::string		getName(void) const;
		void			setName(std::string name);
		unsigned int	getHitPoints(void) const;
		void			setHitPoints(unsigned int hp);
		unsigned int	getAttackDamage(void) const;
		void			setAttackDamage(unsigned int value);
		unsigned int	getEnergyPoints(void) const;
		void			setEnergyPoints(unsigned int value);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
