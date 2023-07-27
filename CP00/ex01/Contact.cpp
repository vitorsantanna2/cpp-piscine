/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*	 Created: 2023/07/13 16:34:03 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/13 16:34:07 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

int	Contact::get_value(void) const
{
	return (this->_value);
}

std::string Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone(void) const
{
	return (this->_phone);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contact::set_first_name(std::istream& in)
{
	while (get_first_name().empty())
		getline(in, this->_first_name);
	return;
}

void	Contact::set_last_name(std::istream& in)
{
	while (get_last_name().empty())
		getline(in, this->_last_name);
	return;
}

void	Contact::set_nickname(std::istream& in)
{
	while (get_nickname().empty())
		getline(in, this->_nickname);
	return;
}

void	Contact::set_phone(std::istream& in)
{
	while (get_phone().empty())
		getline(in, this->_phone);
	return;
}

void	Contact::set_darkest_secret(std::istream& in)
{
	while (get_darkest_secret().empty())
		getline(in, this->_darkest_secret);
	return;
}

void	Contact::set_value()
{
	this->_value = 2;
}

std::string truncate(std::string str, size_t width, bool show_dot=true)
{
    if (str.length() > width)
        if (show_dot)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
    return str;
}

void	Contact::printform(int i) const
{
	std::cout << std::setw(10) << i;
	std::cout << std::setw(1) << "|";
	std::cout << std::setw(10) << truncate(get_first_name(), 9);
	std::cout << std::setw(1) << "|";
	std::cout << std::setw(10) << truncate(get_last_name(), 9);
	std::cout << std::setw(1) << "|";
	std::cout << std::setw(10) << truncate(get_nickname(), 9) << std::endl;
}

int	Contact::printcontact(int i) const
{
	if (get_value() != 2)
	{
		std::cout << "Index Invalid" << std::endl;
		return	(0);
	}
	std::cout << "*************************" << std::endl;
	std::cout << "Index: " << i << std::endl;
	std::cout << "First Name: " << get_first_name() << std::endl;
	std::cout << "Last Name: " << get_last_name() << std::endl;
	std::cout << "Nickname: " << get_nickname() << std::endl;
	std::cout << "Phone: " << get_phone() << std::endl;
	std::cout << "Darkest Secret: " << get_darkest_secret() << std::endl;
	std::cout << "*************************" << std::endl;
	return (1);
}

void	Contact::fill_form()
{
	std::cout << "Type the first name: ";
	set_first_name(std::cin);
	std::cout << "Type the last name: ";
	set_last_name(std::cin);
	std::cout << "Type the nickname: ";
	set_nickname(std::cin);
	std::cout << "Type the phone number: ";
	set_phone(std::cin);
	std::cout << "Type the darkest secret: ";
	set_darkest_secret(std::cin);
	set_value();
	std::cout << "Contact added!: " << std::endl;
	return;
}