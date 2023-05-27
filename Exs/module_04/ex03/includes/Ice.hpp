/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:18:52 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 16:19:11 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		//canonical form
		Ice(void);
		Ice(const Ice &src);
		virtual	~Ice(void);

		//Operator overload
		Ice		&operator=(const Ice &src);

		//Methods
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
