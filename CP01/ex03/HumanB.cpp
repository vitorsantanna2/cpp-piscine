#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), wp1(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon *wp1)
{
	this->wp1 = wp1;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->wp1->getType() << std::endl;
}
