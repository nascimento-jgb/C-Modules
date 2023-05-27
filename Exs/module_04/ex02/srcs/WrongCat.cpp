/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:55:47 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 13:28:59 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

//Canonical form
WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor being called" << std::endl;
	return ;
}

WrongCat::WrongCat(std::string type)
{
	type = "WrongCat";
	this->_type = type;
	std::cout << "WrongCat constructor called and initializing type by parameter passed" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "WrongCat copy constructor being called" << std::endl;
	*this = cpy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout<< "WrongCat destructor being called" << std::endl;
	return ;
}

//Operator
WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	WrongCat::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string WrongCat::getType(void) const
{
	return (this->_type);
}

//Method
void	WrongCat::makeSound(void) const
{
	std::cout << "Ralf Ralf Ralf!" << std::endl;
	return ;
}
