/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:04 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/07 12:48:26 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
	//General test

	Bureaucrat *B = new Bureaucrat("John", 15);
	Form	*F = new Form("Test", 20, 100);

	try
	{
		F->beSigned(*B);
		B->signForm(*F);
		std::cout << B;
		std::cout << F;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	//Test for first exception

	// Bureaucrat *B = new Bureaucrat("John", 25);
	// Form	*F = new Form("Test", 20, 100);

	// try
	// {
	// 	F->beSigned(*B);
	// 	B->signForm(*F);
	// 	std::cout << B;
	// 	std::cout << F;
	// }
	// catch(Form::GradeTooLowException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	//Constructor and sign grade test

	// Bureaucrat *B = new Bureaucrat("John", 15);

	// try
	// {
	// 	Form	*F = new Form("Test", 0, 100);
	// 	F->beSigned(*B);
	// 	B->signForm(*F);
	// 	std::cout << B;
	// 	std::cout << F;
	// }
	// catch(Form::GradeTooHighException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	//Execution grade test
	// Bureaucrat *B = new Bureaucrat("John", 15);

	// try
	// {
	// 	Form	*F = new Form("Test", 10, -25);
	// 	F->beSigned(*B);
	// 	B->signForm(*F);
	// 	std::cout << B;
	// 	std::cout << F;
	// }
	// catch(Form::GradeTooHighException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	delete B;
	delete F;

	//   /\ deletes must be adjusted according to each case
}
