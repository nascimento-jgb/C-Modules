/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:17:49 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 16:34:45 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

//Canonical Form
Ice::Ice(void)
{
	std::cout << "Ice class constructed by default." << std::endl;
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice &src)
{
	std::cout << "Ice class constructed by copy." << std::endl;
	this->_type = src._type;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice desctructor called." << std::endl;
	return ;
}

//Operator Overload
Ice	&Ice::operator=(const Ice &src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

//Methods
AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
