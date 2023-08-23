/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/23 11:17:15 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const &cat) : Animal()
{
	*this = cat;
}

Cat &Cat::operator=(Cat const &cat)
{
	this->type = cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Meoooow" << std::endl;
}
