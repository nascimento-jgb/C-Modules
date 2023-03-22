/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:47:35 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 17:07:24 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl
{
	public:

		Harl(void);
		~Harl(void);

		void	complain(std::string level);

	private:

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif
