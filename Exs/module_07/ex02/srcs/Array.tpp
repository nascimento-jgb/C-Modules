/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:53:38 by jonascim          #+#    #+#             */
/*   Updated: 2023/06/19 13:12:07 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

//Canonical Form
template <typename T>
Array<T>::Array(void) : _size(0), _info(nullptr)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _info(new T[n])
{
	return ;
}

template <typename T>
Array<T>::Array(Array<T> const &src) : _size(src.size()), _info( new T[src.size()])
{
	unsigned int lenght = src.size();
	for (unsigned int i = 0; i < lenght; i++)
		_info[i] = src[i];
	return ;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &src)
{
	if (this == &src)
		return (*this);
	unsigned int lenght = src.size();
	delete []_info;
	_info = new T[lenght];
	for (unsigned int i = 0; i < lenght; i++)
		_info[i] = src[i];
	return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
	delete []_info;
	return ;
}

//Methods
template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::exception();
	return (_info[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}
