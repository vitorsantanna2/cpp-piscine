#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie* zb1 = new Zombie[N];
	while (i < N)
	{
		zb1[i].setName(name);
		i++;
	}
	return (zb1);
}
