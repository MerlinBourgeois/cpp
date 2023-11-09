#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private :
	std::string type;
public :
	Weapon(std::string type);
	const std::string	&getType();
	void	setType(std::string newType);
} ;

#endif