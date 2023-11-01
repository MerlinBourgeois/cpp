#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <cstring>

#define GUESS_NUM 30

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "BAH FRERO ON A PAS DARGUMENT?" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string input;
	std::size_t max_num = GUESS_NUM;
	std::size_t min_num = 0;
	while (max_num != min_num)
	{
		std::cout << max_num.to_string;
		std::cout << "PLUS (p) | MOINS (m) | TROUVE (t) => ";
		std::cin >> input;

	}
	
}