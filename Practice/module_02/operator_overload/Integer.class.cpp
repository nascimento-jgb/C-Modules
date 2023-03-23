/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:13:44 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/23 15:52:06 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

Integer::Integer(int const n) : _n( n )
{
	std::cout << "Constructor called with value " << n << std::endl;
	return ;
}

Integer::~Integer(void)
{
	std::cout << "Destructor called ith value " << this->_n << std::endl;
	return ;
}

int	Integer::getValue(void) const
{
	return (this->_n);
}

Integer	&Integer::operator=(Integer const &rhs)
{
	std::cout << "Assignation opertor called with " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();
	return (*this);
}

Integer	Integer::operator+(Integer const &rhs) const
{
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	return (Integer(this->_n + rhs.getValue()));
}

std::ostream &operator<<(std::ostream &output, Integer const &rhs)
{
	output << rhs.getValue();
	return (output);
}
