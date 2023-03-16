/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:35:52 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 12:22:02 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main()
{
	Sample	instance;
	Sample *instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;`
}
