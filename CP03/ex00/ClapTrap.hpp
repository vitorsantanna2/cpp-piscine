/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:15:38 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 17:07:45 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_hpp
# define ClapTrap_hpp

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;
	public:
		ClapTrap(std::string& name);
		ClapTrap(ClapTrap const &clap);
		ClapTrap &operator=(ClapTrap const &clap);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
