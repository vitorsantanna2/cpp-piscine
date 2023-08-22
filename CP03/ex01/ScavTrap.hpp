/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:15:38 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 19:57:02 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_hpp
# define ScavTrap_hpp

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string& name);
		ScavTrap(ScavTrap const &scav);
		ScavTrap &operator=(ScavTrap const &scav);
		~ScavTrap();
		virtual void	attack(const std::string& target);
		void	guardGate();
};

#endif
