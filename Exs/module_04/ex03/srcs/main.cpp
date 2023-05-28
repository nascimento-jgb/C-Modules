/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:22:42 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/28 14:30:01 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"


int main(void)
{
	{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	ICharacter	*me = new Character("me");
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter	*bob = new Character("Bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "=================================================" << std::endl;
	delete me;
	delete src;
	delete bob;
	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;
	}
	return (0);
}
