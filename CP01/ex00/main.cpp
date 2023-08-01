#include "Zombie.hpp"

int	main(void)
{
	Zombie* zb1 = newZombie("Victor");
	randomChump("Firmino");
	delete (zb1);
	return (0);
}
