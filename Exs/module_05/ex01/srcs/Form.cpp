/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:57:07 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/22 07:53:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

//Canonical Form
Form::Form(void) : _name("default"), _signature(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor being called." << std::endl;
	return ;
}

Form::Form(const std::string name, int sign_grade, int exec_grade) : _name(name), _signature(false), _signGrade(sign_grade), _execGrade(exec_grade)
{
	std::cout << "Form constructor with name and grades parameters being called." << std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(Form::GradeTooLowException());
	else if (i < 1 || j < 1)
		throw(Form::GradeTooHighException());
	return ;
}

Form::Form(const Form &src) : _name(src.getName() + "_copy"), _signature(false), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	std::cout << "Form Copy Constructor called to copy " << src.getName() << " into " << this->getName() << std::endl;
	*this = src;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form destructor being called." << std::endl;
}

//Operators Overload
Form	&Form::operator=(Form const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

//Getters and Setters
const std::string	Form::getName(void) const
{
	return (this->_name);
}

const std::string	Form::getIsSigned(void) const
{
	if (this->_signature)
		return ("YES, it's signed!");
	else
		return ("NOPE, it's not signed!");
}

bool	Form::getSignature(void) const
{
	return (this->_signature);
}

int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

//Methods
void	Form::beSigned(Bureaucrat &ref)
{
	if ((int)ref.getGrade() > this->getSignGrade())
		throw(Form::GradeTooLowException());
	else if (this->getIsSigned() == "NOPE, it's not signed!")
		{
			std::cout << "Form will be signed by the bureaucrat : " << ref.getName() << "." << std::endl;
			this->_signature = true;
		}
	else
		std::cout << "Form = already signed!" << std::endl;
}

//Exeptions
const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

// ostream Overload
std::ostream	&operator<<(std::ostream &os, Form *target)
{
	os << "Form - " << target->getName()
	<< "\nForm sign grade : \t" << target->getSignGrade()
	<< "\nForm exec grade : \t" << target->getExecGrade()
	<< "\nIs the form signed? : \t" << target->getIsSigned()
	<< std::endl;
	return (os);
}

