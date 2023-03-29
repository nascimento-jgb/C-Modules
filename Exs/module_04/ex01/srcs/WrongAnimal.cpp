/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:55:04 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 11:02:10 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

//Canonical form
WrongAnimal::WrongAnimal(void) : _type("default")
{
	std::cout << "WrongAnimal default constructor being called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called and initializing type by parameter passed" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor being called" << std::endl;
	*this = cpy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout<< "WrongAnimal destructor being called" << std::endl;
	return ;
}

//Operator
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

//Method
void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal default sound not defined" << std::endl;
	return ;
}
