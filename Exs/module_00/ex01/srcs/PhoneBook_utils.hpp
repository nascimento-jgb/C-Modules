/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 07:34:09 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/17 11:13:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_H
# define PHONEBOOK_UTILS_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

std::string	fix_len(std::string str, unsigned int limit);
int			search_table(Contact phoneBook[8]);

#endif
