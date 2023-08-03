#ifndef Zombie_hpp
# define Zombie_hpp

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	announce();
};

Zombie* zombieHorde(int N, std::string name);
#endif
