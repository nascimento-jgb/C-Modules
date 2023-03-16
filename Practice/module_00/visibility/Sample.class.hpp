/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:06:10 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/15 14:32:09 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:

		int	publicFoo;

		Sample( void );
		~Sample( void );

		void	publicBar( void ) const;

	private:

		int	_privateFoo;

		void	_privateBar( void ) const;
};

#endif
