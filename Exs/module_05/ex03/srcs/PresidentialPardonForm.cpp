/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:37:32 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/08 09:12:53 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm default constructor being called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor being called." << std::endl;
	*this = src;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm assigning operator being called." << std::endl;
	if (this == &src)
		return (*this);
	return (*this);

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor being called" << std::endl;
	return ;
}


std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if ((int)executor.getGrade() > this->getExecGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getSignature() == false)
		throw(AForm::FormNotSignedException());
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &os, PresidentialPardonForm *target)
{
	os << "AForm - " << target->getName()
	<< "\nSign grade : \t" << target->getSignGrade()
	<< "\nExec grade : \t" << target->getExecGrade()
	<< "\nIs the form signed? : \t" << target->getIsSigned()
	<< std::endl;
	return (os);
}
