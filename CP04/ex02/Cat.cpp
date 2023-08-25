/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:49:25 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/25 18:17:33 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const &cat) : AAnimal()
{
	std::cout << "Operator copy constructor called" << std::endl;
	this->type = cat.type;
	this->brain = new Brain(*cat.brain);
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Operator constructor called" << std::endl;
	if (brain)
		delete brain;
	this->type = cat.type;
	this->brain = new Brain(*cat.brain);
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Meoooow" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->brain);
}
