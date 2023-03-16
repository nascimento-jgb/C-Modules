/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:48:13 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 09:03:34 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return ;
}

int	Sample::getNbInst( void )
{
	return (Sample::_nbInst);
}

int	Sample::_nbInst = 0;
