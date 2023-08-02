#ifndef Human_A
# define Human_A

# include "Weapon.hpp"

class HumanA {
	private:
		Weapon &wp1;
		std::string name;
	public:
		HumanA(std::string name, Weapon &wp1);
		~HumanA(void);
		void attack(void);
};

#endif
