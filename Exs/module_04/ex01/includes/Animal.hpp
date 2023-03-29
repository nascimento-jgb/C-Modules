/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:52:51 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 10:50:45 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	protected:

		std::string _type;

	public:
		//canonical form
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &cpy);
		virtual ~Animal(void);

		//Operator overload
		Animal		&operator=(const Animal &src);

		//Getter and Setter
		void		setType(std::string type);
		std::string	getType(void) const;

		//Method
		virtual void		makeSound(void) const;
};

#endif
