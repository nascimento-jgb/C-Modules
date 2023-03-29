/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:04:09 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/24 08:30:06 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample
{

	public:

		Sample(void);
		Sample(int const n);
		Sample(Sample const &src);
		~Sample(void);

		Sample	&operator=(Sample const &rhs);
		int		getFoo(void) const;

	private:

		int	_foo;
};

std::ostream	&operator<<(std::ostream &out, Sample const &i);

#endif
