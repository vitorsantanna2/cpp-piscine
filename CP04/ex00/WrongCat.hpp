/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:35:49 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/23 11:04:08 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_hpp
# define WrongCat_hpp

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal 
{
	public:
		WrongCat();
		WrongCat(WrongCat const &cat);
		WrongCat &operator=(WrongCat const &cat);
		~WrongCat();
		void makeSound() const;
};

#endif
