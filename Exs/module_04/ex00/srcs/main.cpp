/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:54:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 11:02:14 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	const WrongAnimal	*beta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();

	std::cout << k->getType() << std::endl;
	k->makeSound();
	beta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete beta;
	delete k;
	return (0);
}
