/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:55:54 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/28 14:01:48 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materias[4];

	public:
		//Canonical Form
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		//Operator Overload
		MateriaSource &operator=(const MateriaSource &src);

		//Methods
		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
};

#endif
