/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:04 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 08:00:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	Bureaucrat Hey("Hey", 5);
	Bureaucrat Yo("Yo", 150);

	Intern intern;

	AForm *shrubbery = intern.makeForm("shrubbery creation", "forest");
	AForm *robotomy = intern.makeForm("robotomy request", "My Guy");
	AForm *presidential = intern.makeForm("presidential pardon", "Ma Boy");
	AForm *imaginary = intern.makeForm("imaginary form", "Some random dude");
	if (imaginary == NULL)
		std::cout << "Failed to create imaginary form!" << std::endl;

	Yo.signForm(*shrubbery);

	Hey.signForm(*shrubbery);
	Hey.signForm(*robotomy);
	Hey.signForm(*presidential);

	Yo.executeForm(*shrubbery);

	Hey.executeForm(*shrubbery);
	Hey.executeForm(*robotomy);
	Hey.executeForm(*presidential);

	delete shrubbery;
	delete robotomy;
	delete presidential;

	return 0;
}
