/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 07:38:07 by jonascim          #+#    #+#             */
/*   Updated: 2023/04/26 09:46:15 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_utils.hpp"

std::string	fix_len(std::string str, unsigned int limit)
{
	if (str.size() > limit)
	{
		str.resize(limit);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int	search_table(Contact phoneBook[8])
{
	std::string	aux;
	char		c;
	int			counter;

	std::cout << "\t|-------------------------------------------|"<< std::endl;
	std::cout << "\t|   Index  |   Name   | Last Name| Nickname |"<< std::endl;
	std::cout << "\t|----------|----------|----------|----------|"<< std::endl;
	counter = 0;
	c = '0';
	while (++c <= '8')
	{
		if (phoneBook[c - 1 - '0'].getName().size())
		{
			aux = c;
			aux = fix_len(aux, 10);
			std::cout << "\t|" << std::setfill(' ') << std::setw(10) << aux;
			aux = fix_len(phoneBook[c - 1 - '0'].getName(), 10);
			std::cout << "|" << std::setfill(' ') << std::setw(10) << aux;
			aux = fix_len(phoneBook[c - 1 - '0'].getLastName(), 10);
			std::cout << "|" << std::setfill(' ') << std::setw(10) << aux;
			aux = fix_len(phoneBook[c - 1 - '0'].getNickname(), 10);
			std::cout << "|" << std::setfill(' ') << std::setw(10) << aux;
			std::cout << "|" << std::endl;
			++counter;
		}
	}
	std::cout << "\t|-------------------------------------------|" << std::endl;
	return (counter);
}
