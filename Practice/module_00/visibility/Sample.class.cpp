/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:11:15 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/15 16:00:20 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void )
{
	std::cout << "constructor called" << std::endl;
	this->publicFoo = 0;
	std::cout << "this->publicFoo = " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo = " << this->_privateFoo << std::endl;
	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

void	Sample::publicBar( void ) const
{
	std::cout << "Member function publicBar called" << std::endl;

	return ;
}

void	Sample::_privateBar( void ) const
{
	std::cout << "Member function _privateBar called" << std::endl;

	return ;
}


