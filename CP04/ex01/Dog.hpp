/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/23 10:56:22 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_hpp
# define Dog_hpp

# include "Animal.hpp"

class Dog: public Animal 
{
	public:
		Dog();
		Dog(Dog const &dog);
		Dog &operator=(Dog const &dog);
		~Dog();
		void makeSound() const;
};

#endif
