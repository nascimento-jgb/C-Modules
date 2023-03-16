/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:41:54 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 15:07:59 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	addPhoneBook(void) ;
		void	searchPhoneBook(void) const;
		void	print(Contact contact) const;

		Contact	get_contact(int index) const;

	private:

		Contact	_phoneBook[8];
		int		_index;
};

#endif
