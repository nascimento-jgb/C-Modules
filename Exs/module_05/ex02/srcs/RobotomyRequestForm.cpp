/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:37:36 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/08 09:13:07 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm default constructor being called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor being called." << std::endl;
	*this = src;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm assigning operator being called." << std::endl;
	if (this == &src)
		return (*this);
	return (*this);

}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor being called" << std::endl;
	return ;
}


std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

static int robot_failure = 0;

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if ((int)executor.getGrade() > this->getExecGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getSignature() == false)
		throw(AForm::FormNotSignedException());
	else if (robot_failure++ % 2)
		std::cout << "BRRRRRRRRRRRRRR\n" << this->getTarget() << " was robotomized." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &os, RobotomyRequestForm *target)
{
	os << "AForm - " << target->getName()
	<< "\nSign grade : \t" << target->getSignGrade()
	<< "\nExec grade : \t" << target->getExecGrade()
	<< "\nIs the form signed? : \t" << target->getIsSigned()
	<< std::endl;
	return (os);
}
