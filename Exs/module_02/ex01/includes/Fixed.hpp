/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:53:11 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/24 10:42:05 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(int const nbr);
		Fixed(float const nbr);
		Fixed(Fixed const &cpy);
		Fixed	&operator=(Fixed const &rhs);
		~Fixed(void);

		float	toFloat(void) const;
		int		toInt(void)	const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &nbr);
#endif
