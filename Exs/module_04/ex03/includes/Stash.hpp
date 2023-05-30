/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stash.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:41:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 11:21:39 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STASH_HPP
#define STASH_HPP

#include "AMateria.hpp"

class Stash
{
	private:
		AMateria	*_data;
		Stash		*_next;

	public:
		//Canonical Form
		Stash(void);
		Stash(AMateria *m);
		Stash(const Stash &src);
		~Stash(void);

		//Operator overload
		Stash	&operator=(const Stash &src);

		//Getters and Setters
		Stash		*getNext(void);
		void		setNext(Stash *append);
		AMateria	*getMateria(void);
};

#endif
