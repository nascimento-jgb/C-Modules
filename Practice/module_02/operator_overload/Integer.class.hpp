/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:02:55 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/23 13:18:58 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERGER_CLASS_H
# define INTEGER_CLAS_H

# include <iostream>

class Integer
{
	public:

		Integer(int const n);
		~Integer(void);

		int	getValue(void) const;

		Integer	&	operator=(Integer const &rhs);
		Integer		operator+(Integer const &rhs) const;

	private:

		int	_n;

};

std::ostream &operator << (std::ostream &o, Integer const &rhs);

#endif
