/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:14 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/28 12:56:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		size_t				_grade;

		void	setGrade(int grade);

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat			&operator=(Bureaucrat const &src);
		~Bureaucrat(void);

		const std::string	getName(void) const;
		size_t				getGrade(void) const;

		void				decrementGrade(void);
		void				incrementGrade(void);
		void				signForm(Form &ref);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};
	//Operator overload
		std::ostream	&operator<<(std::ostream &os, Bureaucrat *target);

