/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/25 18:11:14 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog const &dog) : Animal()
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = dog.type;
	this->brain = new Brain(*dog.brain);
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Operator constructor called" << std::endl;
	if (brain)
		delete brain;
	this->type = dog.type;
	this->brain = new Brain(*dog.brain);
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}
