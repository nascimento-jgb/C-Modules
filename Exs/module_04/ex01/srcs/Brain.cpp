/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 13:21:40 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

//Canonical form
Brain::Brain(void)
{
	this->ideas =  new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Conciousness created";
	std::cout << "Brain default constructor being called" << std::endl;
	return ;
}

Brain::Brain(Brain &cpy)
{
	std::string *ref_ideas = cpy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref_ideas[i] + "multiplied";
	std::cout << "Brain copy constructor being called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout<< "Brain destructor being called" << std::endl;
	delete [] (this->ideas);
	return ;
}

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

std::string	*Brain::getIdeas(void)
{
	return (this->ideas);
}
