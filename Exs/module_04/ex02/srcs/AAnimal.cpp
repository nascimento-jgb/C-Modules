/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:03:35 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 14:43:33 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

//Canonical form
AAnimal::AAnimal(void) : _type("default")
{
	std::cout << "AAnimal default constructor being called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called and initializing type by parameter passed" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	std::cout << "AAnimal copy constructor being called" << std::endl;
	*this = cpy;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout<< "AAnimal destructor being called" << std::endl;
	return ;
}

//Operator
AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	AAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

//Method
void	AAnimal::makeSound(void) const
{
	std::cout << "Animal default sound not defined" << std::endl;
	return ;
}
