#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	return	;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
