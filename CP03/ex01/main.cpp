/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:48:30 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 19:51:10 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string ally;
	std::string enemy;

	ally = "Hulk";
	enemy = "Mercúrio";
	ClapTrap clap(ally);
	ScavTrap scav(ally);
	ScavTrap scav2(enemy);

	clap.attack(enemy);
	scav.attack(enemy);
	return (0);
}
