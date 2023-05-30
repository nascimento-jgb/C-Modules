/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:22:42 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 11:33:36 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"


int main(void)
{
	//Basic Test
	// {
	// IMateriaSource	*src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter	*me = new Character("me");
	// AMateria	*tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter	*bob = new Character("Bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// delete me;
	// delete src;
	// delete bob;
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// }

	//Multiple Materia creation test
	// {
	// IMateriaSource	*src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter	*me = new Character("me");
	// AMateria	*tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// tmp = src->createMateria("fire");
	// me->equip(tmp);
	// // tmp = src->createMateria("cure");
	// me->equip(tmp);
	// // tmp = src->createMateria("ice");
	// me->equip(tmp);
	// // tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter	*bob = new Character("Bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// delete me;
	// delete src;
	// delete bob;
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// }

	//Max slots for equip and unequip
	// {
	// MateriaSource	*src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// Character me("me");
	// AMateria	*tmp;
	// tmp = src->createMateria("ice");
	// me.equip(tmp);
	// tmp = src->createMateria("cure");
	// me.equip(tmp);
	// me.equip(tmp);
	// me.equip(tmp);
	// me.equip(tmp);

	// Character bob("Bob");
	// me.use(0, bob);
	// me.use(1, bob);
	// me.unequip(0);
	// me.use(0, bob);
	// me.use(1, bob);
	// me.unequip(1);
	// me.use(1, bob);
	// me.unequip(1);
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// // system("leaks rpg");
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// delete src;
	// std::cout << "=================================================" << std::endl;
	// std::cout << "=================================================" << std::endl;
	// }

	//Deep copy tests
	{
	MateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character *me =  new Character("me");
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);

	Character *bob =  new Character("bob");
	Character *jon = new Character(*me);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);
	delete me;

	jon->use(0, *bob);
	jon->use(1, *bob);
	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;
	// system("leaks rpg");
	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;
	delete src;
	delete bob;
	delete jon;
	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;
	}

	return (0);
}
