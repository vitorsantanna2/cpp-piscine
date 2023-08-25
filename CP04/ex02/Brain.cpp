/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:38:44 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/24 23:24:02 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &brain)
{
	ideas = new std::string[100];
	for (int i = 0; i < 100; ++i) {
            ideas[i] = brain.ideas[i];
        }
}

Brain &Brain::operator=(Brain const &brain)
{
	for (int i = 0; i < 100; ++i)
		this->setIdeas(i, brain.getIdeas(i));
	return (*this);
}

Brain::~Brain()
{
	delete [] ideas;
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

std::string	Brain::getIdeas(int index) const
{
	return (this->ideas[index]);
}


void	Brain::setIdeas(int index, std::string value)
{
	this->ideas[index] = value;
}
