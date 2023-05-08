/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 08:12:40 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/08 09:57:22 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string name, int energy);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &cpy);
		~ScavTrap(void);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
