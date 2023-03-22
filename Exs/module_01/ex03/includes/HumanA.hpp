/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:49:30 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 11:36:42 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

	private:

		std::string	_name;
		Weapon		&_type;
};

#endif
