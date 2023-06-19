/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:07:06 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 11:28:15 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <typeinfo>
#include <iostream>

template <typename T>
void iter(T *array, int lenght, void (* function)(T))
{
	for (int i = 0; i < lenght; i++)
		function(array[i]);
}

template <typename T>
void	printElement(T element)
{
	std::cout << element << " ";
}
