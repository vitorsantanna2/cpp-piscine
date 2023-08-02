#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	return	;
}

Weapon::~Weapon()
{
	return	;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}


void	Weapon::setType(std::string type)
{
	this->type = type;
}
