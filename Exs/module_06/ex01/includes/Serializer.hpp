/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 08:12:09 by jonascim          #+#    #+#             */
/*   Updated: 2023/07/01 13:58:41 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <cstdint>

struct Data
{
	int	aux;
};

class Serializer
{
	private:
		Serializer(void);
		~Serializer(void);
		Serializer(Serializer const &src);
		Serializer &operator=(Serializer const &src);

	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif
