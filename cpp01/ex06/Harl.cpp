#include "Harl.hpp"

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string filsDePute[4] {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == filsDePute[i])
		{
			switch (i)
			{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				(this->*functions[0])();
				std::cout << std::endl;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				(this->*functions[1])();
				std::cout << std::endl;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				(this->*functions[2])();
				std::cout << std::endl;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				(this->*functions[3])();
				std::cout << std::endl;
			}	
		}
	}
}