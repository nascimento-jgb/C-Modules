/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:04:40 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/28 14:16:02 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default constructor for intern being called." << std::endl;
	return ;
}

Intern::Intern(const Intern &src)
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
	(void) src;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor being called." << std::endl;
	return ;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target) const
{
	static const int form_count = 3;
	static const std::string form_names[]
		= {"shrubbery creation", "robotomy request", "presidential pardon"};
	static const form_factory form_factories[]
		= {&Intern::ShrubberyCreationFactory, &Intern::RobotomyRequestFactory, &Intern::PresidentialPardonFactory};
	for (int i = 0; i < form_count; i++)
	{
		if (name.compare(form_names[i]) == 0) {
			std::cout << "Intern creates " << name << std::endl;
			return (this->*form_factories[i])(target);
		}
	}
	return NULL;
}

//Private
AForm *Intern::PresidentialPardonFactory(std:: string const &target) const
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::RobotomyRequestFactory(std:: string const &target) const
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::ShrubberyCreationFactory(std:: string const &target) const
{
	return new ShrubberyCreationForm(target);
}

