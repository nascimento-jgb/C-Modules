/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:46:18 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 14:58:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	addContact(PhoneBook instance, int counter)
{
	if (counter = 7)
		counter = 0;
	std::cout << "Insert the name of the contact" << std::endl;
	std::cin >> instance.setPhoneBook.
	counter++;
}

int main()
{
	PhoneBook instance;
	char	*command;
	int		choice;
	int		counter;

	counter = 0;
	while (1)
	{
		std::cout << "\n\t\t\t MAIN MENU                         " << std::endl;
		std::cout << "\t=========================================" << std::endl;
		std::cout << "\t Type ADD to insert a new contact        " << std::endl;
		std::cout << "\t Type SEARCH to find info about contacts " << std::endl;
		std::cout << "\t Type EXIT to finalize the program       " << std::endl;
		std::cout << "\t=========================================" << std::endl;
		std::cout << '\t';
		std::cin >>	command;
		if (strcmp(command, "ADD") == 0)
			choice = 1;
		else if (strcmp(command, "SEARCH") == 0)
			choice = 2;
		else if (strcmp(command, "EXIT") == 0)
			choice = 3;
		else
			choice = 4;
		switch (choice)
		{
			case 1:
				addContact(instance, counter);
				break;
			case 2:
				// searchContact();
				break;
			case 3:
				return (0);
				break;
			default:
				std::cout << "\nInvalid choice, try again! \n" <<std::endl;
		}
	}
	return (0);
}
