/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:04:48 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/28 14:14:43 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	private:
		AForm	*PresidentialPardonFactory(const std::string &target) const;
		AForm	*RobotomyRequestFactory(const std::string &target) const;
		AForm	*ShrubberyCreationFactory(const std::string &target) const;

	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(const Intern &src);
		virtual ~Intern(void);

		AForm *makeForm(const std::string &name, const std::string &target) const;
};

typedef AForm *(Intern::*form_factory)(const std::string &target) const;
