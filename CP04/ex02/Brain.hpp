/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:08:41 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/24 23:14:29 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string* ideas;
	public:
		Brain();
		Brain(Brain const &brain);
		Brain &operator=(Brain const &brain);
		~Brain();
		std::string	getIdeas(int index) const;
		void	setIdeas(int index, std::string value);
};

#endif
