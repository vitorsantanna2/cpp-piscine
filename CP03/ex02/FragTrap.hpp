/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:15:38 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 20:04:49 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_hpp
# define FragTrap_hpp

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string& name);
		FragTrap(FragTrap const &frag);
		FragTrap &operator=(FragTrap const &frag);
		~FragTrap();
		virtual void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
