/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>          +#+  +:+     +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:33:06 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 09:46:35 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
# define Fixed_hpp

#include <iostream>
#include <math.h>

class	Fixed
{
	private:
		int	_num;
		static const int _ibits = 8;
		static const float _fbits = 8;
	public:
		Fixed();
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(Fixed const &Fix);
		Fixed &operator=(Fixed const &fix);
		~Fixed();
		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed &source);
#endif
