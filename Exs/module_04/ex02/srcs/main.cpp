/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:54:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 14:48:10 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();
	// const AAnimal *alien = new AAnimal();

	std::cout << std::endl;

	delete dog;
	delete cat;
	system("leaks animals");
	std::cout << std::endl;

	return (0);
}
