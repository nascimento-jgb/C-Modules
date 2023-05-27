/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:33:13 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 15:51:40 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

//Canonical Form
AMateria::AMateria(void) : _type("default")
{
	std::cout << "AMateria default constructor being called." << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria type passing contructor being called with type=" << type << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria copy contructor being called" << std::endl;
	this->_type = src._type;
	return ;

}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor being called" << std::endl;
	return ;
}

//Operator overload
AMateria &AMateria::operator=(const AMateria &src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	AMateria::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

//Method
void	AMateria::use(ICharacter &target)
{
	std::cout << "Default use on " << target.getName() << std::endl;
	return ;
}


