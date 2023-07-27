/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:34:25 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/13 16:34:28 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::set_contact(void)
{
	this->_index %= 8;
	this->_contact[this->_index].fill_form();
	this->_index++;
}

void	PhoneBook::search_contact(void) const
{
	int	i;
	int exist;
	int	index;
	std::string	i_str;

	i = 0;
	std::cout << std::setw(11) << "index|";
	std::cout << std::setw(11) << "first name|";
	std::cout << std::setw(11) << "last name|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (i < this->_index)
	{
		this->_contact[i].printform(i);
		i++;
	}
	exist = 0;
	while (exist == 0)
	{
		std::cout << "Index Number: ";
		std::cin >> i_str;
		index = stoi(i_str);
		if (index >= 0 && index < 8)
		{
			exist = this->_contact[index].printcontact(index);
		}
	}
}