/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:08:42 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 09:11:17 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) : foo( 0 )
{
	std::cout << " Constructor being called " << std::endl;
	return ;
}

Sample::~Sample( void )
{
	std::cout << " Destructor being called " << std::endl;
	return ;
}

void	Sample::bar( void ) const
{
	std::cout << " Member function being called " << std::endl;
	return ;
}
