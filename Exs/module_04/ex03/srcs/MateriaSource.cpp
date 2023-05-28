/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:01:52 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/28 14:31:14 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

//Canonical Form
MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	std::cout << "MateriaSource constructor being called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = src._materias[i];
	std::cout << "MateriaSource copy constructor being called" << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
		_materias[i] = nullptr;
	}
	std::cout << "MateriaSource destructor being called" << std::endl;
	return ;
}

//Operator Overload
MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
		_materias[i] = src._materias[i];
	}
	return (*this);
}

//Methods
void	MateriaSource::learnMateria(AMateria *add)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr && add != nullptr)
		{
			_materias[i] = add;
			return ;
		}
	}
	std::cout << "Not possible to learn the materia." << std::endl;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	std::cout << "Not possible to create the materia." << std::endl;
	return (0);
}
