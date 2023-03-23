/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:14:00 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/23 10:18:57 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Sample::bar(char const c) const
{
	std::cout << "Member function called by char overload" << std::endl;
	return ;
}

void Sample::bar(int const c) const
{
	std::cout << "Member function called by int overload" << std::endl;
	return ;
}

void Sample::bar(float const c) const
{
	std::cout << "Member function called by float overload" << std::endl;
	return ;
}

void Sample::bar(Sample const &i) const
{
	std::cout << "Member function called by Sample class reference overload" << std::endl;
	return ;
}
