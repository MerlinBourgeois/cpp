#include "Zombie.hpp"

int main(void)
{
	int zNum = 4;
	std::string zName = "Josh";
	Zombie *horde = zombieHorde(zNum, zName);
	for (size_t i = 0; i < zNum; i++)
		horde[i].announce();
	delete []horde;
	return 0;
}