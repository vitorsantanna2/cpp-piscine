#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num = fix.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void)
{
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}
