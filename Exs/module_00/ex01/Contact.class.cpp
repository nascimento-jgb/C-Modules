/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:42:35 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/16 14:58:15 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setName(std::string str)
{
	this->_name = str;
	return ;
}

void	Contact::setLastName(std::string str)
{
	this->_lastName = str;
	return ;
}

void	Contact::setNickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
	return ;
}

void	Contact::setSecret(std::string str)
{
	this->_darkestSecret = str;
	return ;
}

std::string Contact::getName(void) const
{
	return (this->_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getSecret(void) const
{
	return (this->_darkestSecret);
}
