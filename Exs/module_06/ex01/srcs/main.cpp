/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:16:15 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 10:23:32 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include <iostream>

int main()
{
	Data example;

	example.aux = 10;
	uintptr_t serialized = Serializer::serialize(&example);
	Data *deserialized = Serializer::deserialize(serialized);

	std::cout << &example << '\n' << deserialized << '\n' << deserialized->aux << std::endl;
	return (0);
}
