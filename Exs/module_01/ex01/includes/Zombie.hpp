/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:03 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/20 11:27:47 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public:

		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);

	private:

		std::string _name;
};

#endif
