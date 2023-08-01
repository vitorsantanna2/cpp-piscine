#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* zb1 = new Zombie(name);
	return (zb1);
}
