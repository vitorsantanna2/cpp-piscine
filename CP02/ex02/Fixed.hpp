/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>          +#+  +:+     +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:33:06 by jsantann          #+#    #+#             */
/*   Updated: 2023/08/22 15:45:59 by vitorsantanna    ###   ########.fr       */
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
		static const float _fbits = 8.0f;
	public:
		Fixed();
		Fixed(const int fixed);
		Fixed(const float fixed);
		Fixed(Fixed const &Fix);
		Fixed	&operator=(Fixed const &fix);
		bool	operator>(Fixed const &fix);
		bool	operator<(Fixed const &fix);
		bool	operator>=(Fixed const &fix);
		bool	operator<=(Fixed const &fix);
		bool	operator==(Fixed const &fix);
		bool	operator!=(Fixed const &fix);
		Fixed	operator+(Fixed const &fix);
		Fixed	operator-(Fixed const &fix);
		Fixed	operator*(Fixed const &fix);
		Fixed	operator/(Fixed const &fix);
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		~Fixed();
		static Fixed min(Fixed &num1, Fixed &num2);
		static Fixed min(const Fixed &num1, const Fixed &num2);
		static Fixed max(const Fixed &num1, const Fixed &num2);
		static Fixed max(Fixed &num1, Fixed &num2);
		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed &source);
#endif
