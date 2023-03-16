/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 07:47:18 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 13:30:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo( void ) const
{
	return this->_foo;
}

void	Sample::setFoo( int v )
{
	if (v >= 0)
		this->_foo = v;
	return ;
}
