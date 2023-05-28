/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stash.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:37:37 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/28 09:51:39 by jonascim         ###   ########.fr       */
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
	this->_data = src._data;
	this->_next = src._next;
	return ;
}

Stash::~Stash(void)
{
	delete _data;
	delete _next;
	this->_data = nullptr;
	this->_next = nullptr;
}

//Operator Overload
Stash	&Stash::operator=(const Stash &src)
{
	if (this == &src)
		return (*this);
	this->_data = src._data;
	this->_next = src._next;
	return (*this);
}

//Getters and Setters
Stash	*Stash::getNext(void)
{
	return (this->_next);
}

void	Stash::setNext(Stash *append)
{
	this->_next = append;
	return ;
}

AMateria	*Stash::getMateria(void)
{
	return (this->_data);
}
