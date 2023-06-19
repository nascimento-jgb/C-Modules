/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:07:06 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 11:16:08 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <typeinfo>

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T	max(T &a, T &b)
{
	return (a > b ? a : b);
}


