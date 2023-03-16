/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:56:00 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 09:03:57 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0( void )
{
	Sample instance;

	std::cout << "Number of instances 3rd : " << Sample::getNbInst() << std::endl;
	return ;
}

void	f1( void )
{
	Sample instance;

	std::cout << "Number of instances 2nd : " << Sample::getNbInst() << std::endl;
	f0();
	return ;
}

int main()
{
	std::cout << "Number of instances 1st : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances 4th : " << Sample::getNbInst() << std::endl;

	return (0);
}
