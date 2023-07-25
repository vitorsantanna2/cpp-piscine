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
#include <iostream>

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

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

void	Contact::set_first_name(std::istream& in)
{
	getline(in, this->_first_name);
	return;
}

void	Contact::set_last_name(std::istream& in)
{
	getline(in, this->_last_name);
	return;
}

void	Contact::set_nickname(std::istream& in)
{
	getline(in, this->_nickname);
	return;
}

void	Contact::set_phone(std::istream& in)
{
	getline(in, this->_phone);
	return;
}

void	Contact::set_darkest_secret(std::istream& in)
{
	getline(in, this->_darkest_secret);
	return;
}

void	Contact::fill_form()
{
	std::cout << "Type the first name" << std::endl;
	set_first_name(std::cin);
	std::cout << "Type the last name" << std::endl;
	set_last_name(std::cin);
	std::cout << "Type the nickname" << std::endl;
	set_nickname(std::cin);
	std::cout << "Type the phone number" << std::endl;
	set_phone(std::cin);
	std::cout << "Type the darkest secret" << std::endl;
	set_darkest_secret(std::cin);
	std::cout << "Contact added!" << std::endl;
}