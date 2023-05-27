/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:03:35 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 12:43:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

//Canonical form
Animal::Animal(void) : _type("default")
{
	std::cout << "Animal default constructor being called" << std::endl;
	return ;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor being called" << std::endl;
	*this = cpy;
	return ;
}

Animal::~Animal(void)
{
	std::cout<< "Animal destructor being called" << std::endl;
	return ;
}

//Operator
Animal	&Animal::operator=(const Animal &src)
{
	if(this == &src)
		return(*this);
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	Animal::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
