/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:36:40 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 13:33:59 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain
{
	private:

		Brain	*brain;

	public:
		//canonical form
		Dog(void);
		Dog(std::string type);
		Dog(const Dog &cpy);
		~Dog(void);

		//Operator overload
		Dog		&operator=(const Dog &src);

		//Getter and Setter
		void		setType(std::string type);
		std::string	getType(void) const;
		Brain	*getBrain(void) const;

		//Method
		void		makeSound(void) const;
};

#endif
