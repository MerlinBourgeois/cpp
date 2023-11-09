#include "Zombie.hpp"

int main(void)
{
	Zombie *josh = newZombie("Josh");
	josh->announce();
	randomChump("Billy");
	delete josh;
}