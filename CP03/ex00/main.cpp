/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:48:30 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 17:25:11 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string ally;
	std::string enemy;

	ally = "Hulk";
	enemy = "Mercúrio";
	ClapTrap clep(ally);
	ClapTrap clep2(enemy);

	clep.attack(enemy);
	clep2.takeDamage(0);
	clep2.beRepaired(1);
	return (0);
}
