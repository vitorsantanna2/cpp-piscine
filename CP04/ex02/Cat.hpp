/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/25 18:04:06 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_hpp
# define Cat_hpp

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal 
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(Cat const &cat);
		Cat &operator=(Cat const &cat);
		~Cat();
		void makeSound() const;
		Brain* getBrain() const;
};

#endif
