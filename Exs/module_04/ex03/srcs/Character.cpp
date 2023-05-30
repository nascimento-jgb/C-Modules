/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:35:02 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 11:31:39 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include <iostream>

//Canonical Form
Character::Character(void) : _stash(nullptr)
{
	for (int i = 0; i < 4; i++)
		_spells[i] = nullptr;
	std::cout << "Default constructor being called " << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name), _stash(nullptr)
{
	for (int i = 0; i < 4; i++)
		_spells[i] = nullptr;
	std::cout << "Character parameter constructor being called " << std::endl;
	return ;
}

Character::Character(const Character &src)
{
	_stash = src._stash;
	_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (src._spells[i] != nullptr)
			equip(src._spells[i]->clone());
		else
			_spells[i] = src._spells[i];
	}
	std::cout << "Copy constructor being called " << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_spells[i] != nullptr)
		{
			delete _spells[i];
			_spells[i] = nullptr;
		}
	}
	delete _stash;
	std::cout << "Character destructor was called succesfully" << std::endl;
	return;
}

//Operator overload
Character	&Character::operator=(const Character &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		delete _spells[i];
		_spells[i] = nullptr;
		if (src._spells[i] != nullptr)
			equip(src._spells[i]->clone());
	}
	return (*this);
}

//Getter and Setter
void	Character::setName(std::string name)
{
	_name = name;
	return;
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

//Methods
void	Character::equip(AMateria *m)
{
	if (m == nullptr)
	{
		std::cout << "Invalid Materia trying to be equiped" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_spells[i] == m)
		{
			std::cout << "Materia already existent, not being added again" << std::endl;
			return ;
		}
		else if (_spells[i] == nullptr)
		{
			_spells[i] = m;
			std::cout << _name << " equipped materia " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << _name << " was unable to equip " << m->getType() << ", full inventory." << std::endl;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _spells[idx] != nullptr)
	{
		addToStash(_spells[idx]);
		std::cout << _name << " was able to unequip the materia." << std::endl;
		_spells[idx] = nullptr;
		return ;
	}
	std::cout << _name << " was unable to unequip a materia. Invalid request." << std::endl;
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _spells[idx] != nullptr)
		_spells[idx]->use(target);
	else
		std::cout << _name << " didn't use any materia on target." << std::endl;
	return ;
}

void	Character::addToStash(AMateria *m)
{
	if (_stash == nullptr)
		_stash = new Stash(m);
	else
	{
		Stash *temp = _stash;
		while (temp->getNext() != nullptr)
		{
			if (temp->getMateria() == m)
			{
				std::cout << "Materia already existent" << std::endl;
				return ;
			}
			temp = temp->getNext();
		}
		if (temp->getMateria() == m)
		{
			std::cout << "Materia already existent" << std::endl;
			return ;
		}
		temp->setNext(new Stash(m));
	}
}
