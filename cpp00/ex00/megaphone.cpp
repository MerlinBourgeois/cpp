#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <cstring>

int main(int argc, char **argv) {
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (std::size_t i = 1; i < argc; i++)
	{
		std::size_t len = std::strlen(argv[i]);
		for (std::size_t j = 0; j < len; j++)
		{
			if (std::isalpha(argv[i][j]) && std::islower(argv[i][j]))
				std::cout << static_cast<char>(argv[i][j] - 32);
			else
				std::cout << static_cast<char>(argv[i][j]);
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}