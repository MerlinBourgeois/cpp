#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA {
private :
	Weapon& weapon;
	std::string name;
public :
	HumanA(std::string name, Weapon& weapon);
	void	attack();
} ;

#endif