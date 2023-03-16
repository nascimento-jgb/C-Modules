/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:28:57 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/15 14:32:10 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main()
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance public foo: " << instance.publicFoo << std::endl;
	// instance._privateFoo = 42;
	// std::cout << "instance private foo: " << instance._privateFoo << std::endl;
	instance.publicBar();
	// instance._privateBar();
	return (0);
}
