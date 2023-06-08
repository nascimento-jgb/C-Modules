/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:57:10 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/07 10:42:04 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	protected:
		const std::string	_name;
		bool				_signature;
		const int			_signGrade;
		const int			_execGrade;

		AForm(void);
		AForm(const std::string name, int sign_grade, int exec_grade);

	public:
		AForm &operator=(AForm const &src);
		AForm(const AForm &src);
		virtual ~AForm(void);

		const std::string	getName(void) const;
		const std::string	getIsSigned(void) const;
		bool				getSignature(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		void				beSigned(Bureaucrat const &ref);
		virtual void		execute(Bureaucrat const &executor) const = 0;

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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

};

	std::ostream	&operator<<(std::ostream &os, AForm *target);

#include "../includes/Bureaucrat.hpp"
