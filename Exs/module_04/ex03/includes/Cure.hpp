/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:52:59 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 16:34:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		//canonical form
		Cure(void);
		Cure(const Cure &src);
		virtual	~Cure(void);

		//Operator overload
		Cure		&operator=(const Cure &src);

		//Methods
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
