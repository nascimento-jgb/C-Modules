/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:37 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 13:21:39 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	protected:

		std::string *ideas;

	public:

		Brain(void);
		Brain(Brain &cpy);
		virtual ~Brain(void);

		Brain &operator=(const Brain &src);

		std::string	*getIdeas(void);
};

#endif
