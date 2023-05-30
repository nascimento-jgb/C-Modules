/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:55:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 11:10:38 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

//Canonical Form
Cure::Cure(void)
{
	std::cout << "Cure class constructed by default." << std::endl;
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure &src)
{
	std::cout << "Cure class constructed by copy." << std::endl;
	this->_type = src._type;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called." << std::endl;
	return ;
}

//Operator Overload
Cure	&Cure::operator=(const Cure &src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

//Methods
AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	return ;
}
