#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
private :
	std::string name;
public :
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	setName( std::string name );
	void	announce();
} ;

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif