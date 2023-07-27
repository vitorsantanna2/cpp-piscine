/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:34:14 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/13 17:01:44 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	book;

	input = "";
	std::cout << "Welcome to the Santanna Books!" << std::endl;
	std::cout << "The best phonebook of Earth!" << std::endl;
	std::cout << "Please, type 'ADD' to add new contacts" << std::endl;
	std::cout << "Type 'SEARCH' to search anyone contact" << std::endl;
	std::cout << "Type 'EXIT' to exit the program" << std::endl;
	std::cout << "Menu: ";
	while (input.compare("EXIT"))
	{
		if (input.compare(""))
			std::cout << "Menu: ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			book.set_contact();
		else if (!input.compare("SEARCH"))
		{
			book.search_contact();
			input = "";
		}
		else if (!input.compare(""))
			input = " ";
	}		if (!input.compare(""))
			input = "";
}
