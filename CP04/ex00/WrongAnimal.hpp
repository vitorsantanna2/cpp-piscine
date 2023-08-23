/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/23 11:14:51 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_hpp
# define WrongAnimal_hpp

# include <iostream>
# include <string>

class WrongAnimal 
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &ani);
		WrongAnimal &operator=(WrongAnimal const &ani);
		~WrongAnimal();
		std::string getType() const;
		void makeSound() const;
};

#endif
