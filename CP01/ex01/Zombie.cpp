#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
