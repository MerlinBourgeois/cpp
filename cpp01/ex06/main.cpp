#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "si tu donne trop ou pas assez d'argument bah c'est nul!" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return (0);
}