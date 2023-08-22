/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:48:30 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 20:05:28 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::string ally;
	std::string enemy;

	ally = "Hulk";
	enemy = "Mercúrio";
	ClapTrap clap(ally);
	FragTrap frag(ally);
	FragTrap frag2(enemy);

	clap.attack(enemy);
	frag.attack(enemy);
	frag.highFivesGuys();
	return (0);
}
