/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/25 18:04:12 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_hpp
# define Dog_hpp

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal 
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
