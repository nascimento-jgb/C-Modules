/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:57:10 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/28 13:08:23 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signature;
		const int			_signGrade;
		const int			_execGrade;

	public:
		Form(void);
		Form(const std::string name, int sign_grade, int exec_grade);
		Form(const Form &src);
		Form &operator=(Form const &src);
		~Form(void);

		const std::string	getName(void) const;
		const std::string	getIsSigned(void) const;
		bool				getSignature(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		void				beSigned(Bureaucrat &ref);

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

	std::ostream	&operator<<(std::ostream &os, Form *target);

#include "../includes/Bureaucrat.hpp"
