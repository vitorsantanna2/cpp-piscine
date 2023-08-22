/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:19:34 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 20:04:22 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string& name) : ClapTrap(name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = frag;
}

FragTrap &FragTrap::operator=(FragTrap const &frag)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = frag._name;
	this->_health = frag._health;
	this->_energy = frag._energy;
	this->_damage = frag._damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy == 0 || this->_health == 0)
	{
		std::cout << "no energy or life points";
		return ;
	}
	this->_energy--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl; 
}

void	FragTrap::highFivesGuys()
{
	if (this->_energy == 0 || this->_health == 0)
	{
		std::cout << "no energy or life points";
		return ;
	}
	std::cout << "High Five!" << std::endl;
}
