/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:42:05 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/17 15:10:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook_utils.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addPhoneBook(void)
{
	std::string aux;

	aux = "";
	if (this->_index > 7)
		std::cout << " Information is going to be oerwriten" << this->_phoneBook[this->_index % 8].getName() << std::endl;
	while (!std::cin.eof() && aux == "")
	{
		std::cout << "Enter the first name: " << std::endl;
		if (std::getline(std::cin, aux) && aux != "")
			this->_phoneBook[this->_index % 8].setName(aux);
	}
	aux = "";
	while (!std::cin.eof() && aux == "")
	{
		std::cout << "Enter the last name: " << std::endl;
		if (std::getline(std::cin, aux) && aux != "")
			this->_phoneBook[this->_index % 8].setLastName(aux);
	}
	aux = "";
	while (!std::cin.eof() && aux == "")
	{
		std::cout << "Enter " << this->_phoneBook[this->_index % 8].getName() << "'s nickname: " << std::endl;
		if (std::getline(std::cin, aux) && aux != "")
			this->_phoneBook[this->_index % 8].setNickname(aux);
	}
	aux = "";
	while (!std::cin.eof() && aux == "")
	{
		std::cout << "Enter " << this->_phoneBook[this->_index % 8].getName() << "'s phone number: " << std::endl;
		if (std::getline(std::cin, aux) && aux != "")
			this->_phoneBook[this->_index % 8].setPhoneNumber(aux);
	}
	aux = "";
	while (!std::cin.eof() && aux == "")
	{
		std::cout << "Enter " << this->_phoneBook[this->_index % 8].getName() << "'s darkest secret: " << std::endl;
		if (std::getline(std::cin, aux) && aux != "")
			this->_phoneBook[this->_index % 8].setSecret(aux);
		std::cout << "User " << this->_phoneBook[this->_index % 8].getName() << " was added correctly!" << std::endl;
	}
	this->_index++;
}

void	PhoneBook::searchPhoneBook(void)
{
	std::string	aux;

	if (!search_table(this->_phoneBook))
	{
		std::cout << " List is empty! " << std::endl;
		return;
	}
	aux = "";
	while (!std::cin.eof() && aux == "")
	{
		std::cout << "Select an index to be displayed: " << std::endl;
		if (std::getline(std::cin, aux) && aux != "" && aux.size() == 1 && aux[0] >= 1
					&& aux[0] <= 8 && this->_phoneBook[aux[0] - 1 - '0'].getName().size())
			break ;
	}
	if (!std::cin.eof())
		this->print(this->_phoneBook[aux[0] - 1 - '0']);
}

void	PhoneBook::print(Contact contact) const
{

	if (!contact.getName().size())
	{
		std::cout << "Failed to retrieve info about this contact." << std::endl;
		return ;
	}
	std::cout << "\tFirst name:      " << contact.getName() << std::endl;
	std::cout << "\tLast name:       " << contact.getLastName() << std::endl;
	std::cout << "\tNickname:        " << contact.getNickname() << std::endl;
	std::cout << "\tPhone Number:    " << contact.getPhoneNumber() << std::endl;
	std::cout << "\tDarkest Secret:  " << contact.getSecret() << std::endl;
}
