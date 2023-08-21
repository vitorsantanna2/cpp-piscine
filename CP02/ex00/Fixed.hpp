/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>          +#+  +:+     +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:33:06 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/18 16:47:08 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
# define Fixed_hpp

#include <iostream>

class	Fixed
{
	private:
		int	_num;
		static const int _fract = 8;
	public:
		Fixed();
		Fixed(Fixed const &Fix);
		Fixed &operator=(Fixed const &fix);
		~Fixed();
		int	getRawBits(void);
		void	setRawBits(int const raw);
}
