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