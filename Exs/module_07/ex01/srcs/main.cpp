/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:16:15 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 11:28:16 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Iter.hpp"
#include <iostream>

int main()
{
	int		intArray[] = {1, 2, 3, 4, 5};
	int		intSize = sizeof(intArray) / sizeof(intArray[0]);
	char	charArray[] = {'a', 'b', 'c', 'd', 'e'};
	int		charSize = sizeof(charArray) / sizeof(charArray[0]);

	std::cout << "Let's print the int array: " << std::endl;
	iter(intArray, intSize, printElement<int>);
	std::cout << std::endl;

	std::cout << "Let's print the char array: " << std::endl;
	iter(charArray, charSize, printElement<char>);
	std::cout << std::endl;
	return (0);
}
