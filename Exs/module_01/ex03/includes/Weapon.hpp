/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:39:14 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 11:24:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class	Weapon
{
	public:

		Weapon(std::string weapon_type);
		~Weapon(void);

		std::string	getType(void);
		void		setType(std::string type);

	private:

		std::string	_type;
};

#endif
