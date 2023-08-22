/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorsantanna <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:16:44 by vitorsantanna     #+#    #+#             */
/*   Updated: 2023/08/22 15:45:49 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed::Fixed(const int fixed)
{
	this->_num = fixed * (1 << this->_ibits);
}

Fixed::Fixed(const float fixed)
{
	this->_num = static_cast<int>(roundf(fixed * (1 << (int) this->_fbits)));
}

Fixed::Fixed(Fixed const &fix)
{
	*this = fix;
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	this->_num = fix._num;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &fix)
{
	return (Fixed(this->toFloat() + fix.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &fix)
{
	return (Fixed(this->toFloat() - fix.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &fix)
{
	return (Fixed(this->toFloat() * fix.toFloat()));
}

Fixed	Fixed::operator++(void)
{
	++this->_num;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp;
	
	temp = *this;

	this->_num++;
	return (temp);
}

bool	Fixed::operator>(Fixed const &fix)
{
	return (this->getRawBits() > fix.getRawBits());
}


bool	Fixed::operator<(Fixed const &fix)
{
	return (this->getRawBits() < fix.getRawBits());
}


bool	Fixed::operator<=(Fixed const &fix)
{
	return (this->getRawBits() <= fix.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fix)
{
	return (this->getRawBits() >= fix.getRawBits());
}

bool	Fixed::operator==(Fixed const &fix)
{
	return (this->getRawBits() == fix.getRawBits());
}

Fixed	Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1._num > num2._num)
		return (num2);
	else
		return (num1);
}

Fixed	Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1._num > num2._num)
		return (num1);
	else
		return (num2);
}

Fixed	Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1._num > num2._num)
		return (num2);
	else
		return (num1);
}

Fixed	Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1._num > num2._num)
		return (num1);
	else
		return (num2);
}

Fixed::~Fixed()
{
}

float	Fixed::toFloat(void) const
{
	float floatValue;
	floatValue = this->_num / 256.f;
	return (floatValue);
}

int	Fixed::toInt(void) const
{
	int	value;

	value = this->_num / 256;
	return (value);
}

int	Fixed::getRawBits(void) const
{
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
