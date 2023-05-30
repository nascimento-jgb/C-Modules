/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stash.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:37:37 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 11:21:38 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Stash.hpp"

//Canonical Form
Stash::Stash(void): _data(nullptr), _next(nullptr)
{
	return ;
}

Stash::Stash(AMateria *m): _data(m), _next(nullptr)
{
	return ;
}

Stash::Stash(const Stash &src)
{
	_data = src._data;
	_next = src._next;
	return ;
}

Stash::~Stash(void)
{
	delete _data;
	_data = nullptr;
	delete _next;
	_next = nullptr;
	// Stash *current = this;
	// while (current != nullptr)
	// {
	// 	Stash *next = current->getNext();
	// 	delete current->_data;
	// 	delete current;
	// 	current = next;
	// }
}

//Operator Overload
Stash	&Stash::operator=(const Stash &src)
{
	if (this == &src)
		return (*this);
	_data = src._data;
	_next = src._next;
	return (*this);
}

//Getters and Setters
Stash	*Stash::getNext(void)
{
	return (_next);
}

void	Stash::setNext(Stash *append)
{
	_next = append;
	return ;
}

AMateria	*Stash::getMateria(void)
{
	return (_data);
}
