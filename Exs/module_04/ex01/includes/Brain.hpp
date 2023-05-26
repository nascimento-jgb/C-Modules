/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:37 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/26 16:33:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:

		std::string ideas[100];

	public:

		Brain(void);
		Brain(const Brain &cpy);
		virtual ~Brain(void);

		Brain &operator=(const Brain &src);

		std::string	getIdea(unsigned int index);
		void		setIdea(unsigned int index, std::string idea);
};

#endif
