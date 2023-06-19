/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:07:06 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 13:12:08 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <typeinfo>
#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_info;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const &src);
		Array<T> &operator=(Array<T> const &src);
		~Array(void);

		T &operator[](unsigned int index) const;
		unsigned int	size(void) const;
};

#include "../srcs/Array.tpp"
