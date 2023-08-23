/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/23 11:23:05 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_hpp
# define Animal_hpp

# include <iostream>
# include <string>

class Animal 
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &ani);
		Animal &operator=(Animal const &ani);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
