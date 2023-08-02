#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp1) : name(name), wp1(wp1) 
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name << "attacks with their " << this->wp1.getType() << std::endl; 
}
