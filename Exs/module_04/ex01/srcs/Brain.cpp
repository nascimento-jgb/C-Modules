/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 13:48:02 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

//Canonical form
Brain::Brain(void)
{
	std::cout << "Brain default constructor being called" << std::endl;
	return ;
}

Brain::Brain(const Brain &cpy)
{
	*this = cpy;
	return ;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout<< "Brain destructor being called" << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; src.ideas[i].size() && i < 100; i++)
	{
		std::cout << "Idea " << i + 1 << " , copying: " << src.ideas[i] << std::endl;
		this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout<< "Brain destructor being called" << std::endl;
	return ;
}

std::string	Brain::getIdea(unsigned int index)
{
	if (index > 0 && index <= 100)
		return (this->ideas[index - 1]);
	else
		return ("No idea available");
}

void	Brain::setIdea(unsigned int index, std::string idea)
{
	if (index > 0 && index <= 100)
	{
		this->ideas[index - 1] = idea;
	}
	else
		std::cout << "My brain is full, not possible to allocate more ideas" << std::endl;
}
