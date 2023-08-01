#ifndef Zombie_hpp
# define Zombie_hpp

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif
