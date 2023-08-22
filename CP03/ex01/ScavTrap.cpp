/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:19:34 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 19:59:21 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &scav) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = scav;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = scav._name;
	this->_health = scav._health;
	this->_energy = scav._energy;
	this->_damage = scav._damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy == 0 || this->_health == 0)
	{
		std::cout << "no energy or life points";
		return ;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl; 
}

void	ScavTrap::guardGate()
{
	if (this->_energy == 0 || this->_health == 0)
	{
		std::cout << "no energy or life points";
		return ;
	}
	std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
}
