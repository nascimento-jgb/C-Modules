/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:12:10 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/27 15:35:22 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);

		~FragTrap(void);

		FragTrap &operator=(FragTrap const &cpy);

		void	highFiveGuys(void);
};

#endif
