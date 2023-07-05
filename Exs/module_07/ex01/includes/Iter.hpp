/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:07:06 by jonascim          #+#    #+#             */
/*   Updated: 2023/07/02 09:19:33 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

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

#endif
