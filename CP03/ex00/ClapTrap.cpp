/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:19:34 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 17:26:46 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string& name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = name;
	this->_health = 10;
	this->_energy = 10;
	this->_damage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = clap._name;
	this->_health = clap._health;
	this->_energy = clap._energy;
	this->_damage = clap._damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy == 0 || this->_health == 0)
	{
		std::cout << "no energy or life points";
		return ;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->_health - amount) <= 0)
	{
		this->_health = 0;
		std::cout << this->_name << " is dead" << std::endl;
		return	;
	}
	std::cout << "ClapTrap " << this->_name << " left " << amount << " life points!" << std::endl;
	this->_health = this->_health - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0 || this->_health == 0)
	{
		std::cout << "no energy or life points" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " was repaired in " << amount << " life points!" << std::endl;
	this->_health = this->_health + amount;
}
