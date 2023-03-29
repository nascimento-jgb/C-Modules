/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:14:27 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/24 08:30:09 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default cosntructor called" << std::endl;
	return ;
}

Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Sample::Sample(Sample const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

Sample	&Sample::operator=(Sample const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Sample const &i)
{
	out << "Value of _foo is: " << i.getFoo();
	return out;
}
