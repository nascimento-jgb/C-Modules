/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:14 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/03 17:00:33 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		size_t				_grade;

		void	setGrade(int grade);

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat		&operator=(Bureaucrat const &src);
		~Bureaucrat(void);

		const std::string	getName(void) const;
		size_t				getGrade(void) const;

		void			decrementGrade(void);
		void			incrementGrade(void);


	class GradeTooLowExeption : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooHighExeption : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};
	//Operator overload
		std::ostream	&operator<<(std::ostream &os, Bureaucrat *target);
#endif
