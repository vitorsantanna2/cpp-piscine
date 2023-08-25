/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/25 17:51:30 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal Constructor Called" << std::endl;
	this->type = "Animal";
	return ;
}

AAnimal::AAnimal(AAnimal const &ani)
{
	*this = ani;
}

AAnimal &AAnimal::operator=(AAnimal const &ani)
{
	this->type = ani.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor Called" << std::endl;
	return ;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
