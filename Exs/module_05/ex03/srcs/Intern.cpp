/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:04:40 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/08 10:35:26 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default constructor for intern being called." << std::endl;
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	std::cout << "Default copy constructor for intern being called." << std::endl;
	return ;
}

Intern	&Intern::operator=(Intern const &src)
{
	std::cout << "Intern copy assign operator being called." << std::endl;
	if (this == &src)
		return (*this);
	return(*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor being called." << std::endl;
	return ;
}

AForm *makeForm(std::string const &name, std::string const &target)
{
	AForm *form = nullptr;

	if (!name.empty() && !target.empty())
	{
		switch (name[0])
		{
		case 'Presidential Pardon':
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates :" << form->getName() << std::endl;
			break;
		case 'Robotomy Request':
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates :" << form->getName() << std::endl;
			break;
		case 'Shrubbery Creation':
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates :" << form->getName() << std::endl;
			break;
		default:
			std::cout << "Invalid name request for a form." << std::endl;
			break;
		}
	}
	return (form);
}
