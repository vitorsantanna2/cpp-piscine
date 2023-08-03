#include "Zombie.hpp"

int	main(void)
{
	int i;

	i = 0;
	Zombie* zb1 = zombieHorde(20, "Time");
	while (i < 20)
	{
		zb1[i].announce();
		i++;
	}
	delete [](zb1);
	return (0);
}
