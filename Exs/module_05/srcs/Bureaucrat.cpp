/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:08 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/03 17:02:01 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

//Canonical Form
Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat constructor being called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
	std::cout << "Bureaucrat constructor with anme parameter being called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	this->_grade = src.getGrade();
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor being called." << std::endl;
}

//Operators Overload
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this == &src)
		return (*this);
	this->_grade = src.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat *target)
{
	os << "Bureaucrat: " << target->getName() << ", bureaucrat grade : " <<  target->getGrade() << std::endl;
	return (os);
}

//Getters and Setters
void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else
		this->_grade = grade;
	return ;
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

//Methods
void	Bureaucrat::decrementGrade(void)
{
	std::cout << "Attempt to decrement grade being called." << std::endl;
	this->setGrade(this->_grade - 1);
}

void	Bureaucrat::incrementGrade(void)
{
	std::cout << "Attempt to increment grade being called." << std::endl;
	this->setGrade(this->_grade + 1);
}

//Exeptions
