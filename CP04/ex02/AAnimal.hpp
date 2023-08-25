/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/25 18:04:01 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_hpp
# define AAnimal_hpp

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal 
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(AAnimal const &ani);
		AAnimal &operator=(AAnimal const &ani);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
