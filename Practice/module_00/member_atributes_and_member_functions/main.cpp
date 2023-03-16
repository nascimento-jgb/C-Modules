/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:55:56 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/14 10:58:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample test_variable;

	test_variable.foo = 42;
	std::cout << "instance.foo: " << test_variable.foo << std::endl;
	test_variable.bar();

	return (0);
}
