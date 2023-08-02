#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		Weapon *wp1;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon *wp1);
		void attack(void);
};
#endif
