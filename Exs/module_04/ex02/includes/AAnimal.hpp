/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:52:51 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 14:41:18 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class AAnimal
{
	protected:

		std::string _type;

	public:
		//canonical form
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &cpy);
		virtual ~AAnimal(void) = 0;

		//Operator overload
		AAnimal			&operator=(const AAnimal &src);

		//Getter and Setter
		void			setType(std::string type);
		virtual std::string		getType(void) const;

		//Method
		virtual void	makeSound(void) const;
};

#endif
