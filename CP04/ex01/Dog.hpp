/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/24 23:39:18 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_hpp
# define Dog_hpp

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal 
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(Dog const &dog);
		Dog &operator=(Dog const &dog);
		~Dog();
		void makeSound() const;
		void	setBrain(Brain &brain);
		Brain* getBrain() const;
};

#endif
