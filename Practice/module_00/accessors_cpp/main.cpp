/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 07:52:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 07:56:00 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main()
{
	Sample	instance;

	instance.setFoo( 42 );
	std::cout << "instance.getFoo = " << instance.getFoo() << std::endl;
	instance.setFoo( -42 );
	std::cout << "instance.getFoo = " << instance.getFoo() << std::endl;
	instance.setFoo( 32 );
	std::cout << "instance.getFoo = " << instance.getFoo() << std::endl;

	return (0);
}
