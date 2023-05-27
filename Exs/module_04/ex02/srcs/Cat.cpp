/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:19:17 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 13:28:43 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

//Canonical form
Cat::Cat(void)
{
	this->_type = "Cat";
	this->brain= new Brain();
	std::cout << "Cat default constructor being called" << std::endl;
	return ;
}

Cat::Cat(std::string type)
{
	type = "Cat";
	this->_type = type;
	this->brain = new Brain();
	std::cout << "Cat constructor called and initializing type by parameter passed" << std::endl;
	return ;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy constructor being called" << std::endl;
	this->brain = new Brain(*cpy.brain);
	this->_type = cpy.getType();
	return ;
}

Cat::~Cat(void)
{
	std::cout<< "Cat destructor being called" << std::endl;
	delete this->brain;
	return ;
}

//Operator
Cat	&Cat::operator=(const Cat &src)
{
	if(this == &src)
		return(*this);
	Brain *newBrain = new Brain(*src.brain);
	delete brain;
	this->brain = newBrain;
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

Brain &Cat::getBrain(void) const
{
	return (*brain);
}

//Method
void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoooooow" << std::endl;
	return ;
}
