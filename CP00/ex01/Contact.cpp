/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*	std::cout << "Destructor Called" << std::endl;   Created: 2023/07/13 16:34:03 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/13 16:34:07 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_init = true;
	return	;
}

Contact::~Contact()
{
	return	;
}

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone(void)
{
	return (this->_phone);
}

std::string Contact::get_email(void)
{
	return (this->_email);
}

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
	return;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
	return;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
	return;
}

void	Contact::set_phone(std::string phone)
{
	this->_phone = phone;
	return;
}

void	Contact::set_email(std::string email)
{
	this->_email = email;
	return;
}