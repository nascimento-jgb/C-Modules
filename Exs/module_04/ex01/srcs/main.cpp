/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:54:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/26 16:52:35 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	int const arraySize = 10;
	Animal	*array[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] =  new Dog();
	}
	std::cout << "************************************************" <<  std::endl;
	std::cout << "************************************************" <<  std::endl;
	for (int j = 0; j < arraySize; j++)
	{
		std::cout << "Removing " << j + 1 << "animal from the array" << std::endl;
		delete array[j];
	}
	std::cout << "************************************************" <<  std::endl;
	std::cout << "************************************************" <<  std::endl;
	Dog *basic = new Dog();
	basic->getBrain().setIdea(1, "TEEEEST");
	basic->getBrain().setIdea(2, "TAAAAAATAAAA");
	basic->getBrain().setIdea(101, "NOPE");

	Dog *tmp = basic;
	std::cout << basic->getBrain().getIdea(1) <<  std::endl;
	std::cout << tmp->getBrain().getIdea(2) <<  std::endl;

	delete basic;

	std::cout << tmp->getBrain().getIdea(2) <<  std::endl;

	// std::cout << std::endl;

	// delete dog;
	// delete cat;
	system("leaks animals");
	std::cout << std::endl;

	return (0);
}
