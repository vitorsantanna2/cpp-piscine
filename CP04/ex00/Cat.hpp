/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/23 10:56:43 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_hpp
# define Cat_hpp

# include "Animal.hpp"

class Cat: public Animal 
{
	public:
		Cat();
		Cat(Cat const &cat);
		Cat &operator=(Cat const &cat);
		~Cat();
		void makeSound() const;
};

#endif
