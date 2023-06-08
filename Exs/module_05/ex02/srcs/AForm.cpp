/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:57:07 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/07 10:58:43 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

//Canonical AForm
AForm::AForm(void) : _name("default"), _signature(false), _signGrade(150), _execGrade(150)
{
	std::cout << "AForm default constructor being called." << std::endl;
	return ;
}

AForm::AForm(const std::string name, int sign_grade, int exec_grade) : _name(name), _signature(false), _signGrade(sign_grade), _execGrade(exec_grade)
{
	std::cout << "AForm constructor with name and grades parameters being called." << std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(AForm::GradeTooLowException());
	else if (i < 1 || j < 1)
		throw(AForm::GradeTooHighException());
	return ;
}

AForm::AForm(const AForm &src) : _name(src.getName() + "_copy"), _signature(false), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	std::cout << "AForm Copy Constructor called to copy " << src.getName() << " into " << this->getName() << std::endl;
	*this = src;
	return ;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor being called." << std::endl;
}

//Operators Overload
AForm	&AForm::operator=(AForm const &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

//Getters and Setters
const std::string	AForm::getName(void) const
{
	return (this->_name);
}

const std::string	AForm::getIsSigned(void) const
{
	if (this->_signature)
		return ("YES, it's signed!");
	else
		return ("NOPE, it's not signed!");
}

bool	AForm::getSignature(void) const
{
	return (this->_signature);
}

int	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

//Methods
void	AForm::beSigned(Bureaucrat const &ref)
{
	//Continue from here
	if ((int)ref.getGrade() > this->getSignGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getSignature() == false)
		{
			std::cout << this->getName() << " will be signed by the bureaucrat : " << ref.getName() << "." << std::endl;
			this->_signature = true;
		}
	else
		std::cout <<  this->getName() << " is already signed!" << std::endl;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	(void)executor;
	return ;
}

//Exeptions
const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low.");
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high.");
}

const char *AForm::FormNotSignedException::what(void) const throw()
{
	return ("Form need to be signed first before execution.");
}

// ostream Overload
std::ostream	&operator<<(std::ostream &os, AForm *target)
{
	os << "AForm - " << target->getName()
	<< "\nSign grade : \t" << target->getSignGrade()
	<< "\nExec grade : \t" << target->getExecGrade()
	<< "\nIs the form signed? : \t" << target->getIsSigned()
	<< std::endl;
	return (os);
}

