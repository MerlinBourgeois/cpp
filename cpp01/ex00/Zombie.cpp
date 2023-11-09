#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{}

Zombie::~Zombie()
{
	std::cout << "DESTRUCTION de " << this->name << " terminée." << std::endl; 
}

void	Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}