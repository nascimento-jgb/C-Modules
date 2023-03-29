/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:51:47 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 11:02:12 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//canonical form
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &cpy);
		~WrongCat(void);

		//Operator overload
		WrongCat		&operator=(const WrongCat &src);

		//Getter and Setter
		void		setType(std::string type);
		std::string	getType(void) const;

		//Method
		void		makeSound(void) const;
};

#endif
