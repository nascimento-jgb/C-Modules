/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:51:44 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 15:27:35 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	protected:

		std::string _type;

	public:
		//canonical form
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &cpy);
		~WrongAnimal(void);

		//Operator overload
		WrongAnimal	&operator=(const WrongAnimal &src);

		//Getter and Setter
		void		setType(std::string type);
		std::string	getType(void) const;

		//Method
		virtual void		makeSound(void) const;
};

#endif
