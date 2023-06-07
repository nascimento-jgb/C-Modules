/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:04 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/07 08:54:46 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
	//Test for first exception

	Bureaucrat *B = new Bureaucrat("John");

	B->incrementGrade();
	std::cout << B->getGrade() << std::endl;
	try
	{
		B->decrementGrade();
		std::cout << B->getGrade() << std::endl;
		B->decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Incrementing grade of " << B->getName() <<
		" failed: " << e.what() << std::endl;
	}

	//Test for second exception

	// Bureaucrat *B = new Bureaucrat("John2", 1);

	// std::cout << "Bureaucrat named: " << B->getName()<< ", with grade of: " << B->getGrade() << std::endl;
	// try
	// {
	// 	B->incrementGrade();
	// }
	// catch(Bureaucrat::GradeTooHighException &e)
	// {
	// 	std::cerr << "Incrementing grade of " << B->getName() <<
	// 	" failed: " << e.what() << std::endl;
	// }
}
