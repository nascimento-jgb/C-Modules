/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:19:17 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 10:46:36 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

//Canonical form
Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default constructor being called" << std::endl;
	return ;
}

Cat::Cat(std::string type)
{
	type = "Cat";
	this->_type = type;
	std::cout << "Cat constructor called and initializing type by parameter passed" << std::endl;
	return ;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy constructor being called" << std::endl;
	*this = cpy;
	return ;
}

Cat::~Cat(void)
{
	std::cout<< "Cat destructor being called" << std::endl;
	return ;
}

//Operator
Cat	&Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	Cat::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string Cat::getType(void) const
{
	return (this->_type);
}

//Method
void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoooooow" << std::endl;
	return ;
}
