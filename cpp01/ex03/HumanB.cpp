#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::setWeapon(Weapon& name)
{
	this->weapon = &name;
}

void	HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

