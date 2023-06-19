/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:57:47 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/08 10:37:52 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		std::string	getTarget(void) const;

		void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &os, ShrubberyCreationForm *aim);
