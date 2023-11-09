#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB {
private :
	Weapon* weapon;
	std::string name;
public :
	HumanB(std::string name);
	void	setWeapon(Weapon& name);
	void	attack();
} ;

#endif