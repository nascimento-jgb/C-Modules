/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:36:12 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/20 16:04:35 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of string: " << &str << std::endl;
	std::cout << "Memory address of pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of reference: " << &stringREF << std::endl;

	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
