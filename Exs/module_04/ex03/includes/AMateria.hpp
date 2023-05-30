/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:52:56 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 09:53:38 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:

		std::string	_type;

	public:
		//canonical form
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &src);
		virtual	~AMateria(void);

		//Operator overload
		AMateria			&operator=(const AMateria &src);

		//Getter and Setter
		void				setType(std::string type);
		std::string	const	&getType(void) const;

		//Method
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif
