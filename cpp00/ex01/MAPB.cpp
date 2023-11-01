#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <cstring>

class Contact {
public:
    std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

class PhoneBook {
public:
	Contact contact[8];

	void	Wish_Contact(std::size_t flag) {
		static size_t c_index = 0;

		std::string commande;
		if (c_index == 7)
			c_index = 0;
		if (flag == 0) {
    		std::cout <<"First  name : ";
    		std::cin >> commande;
			contact[c_index].first_name = commande;
			std::cout << "Last name : ";
    		std::cin >> commande;
			contact[c_index].last_name = commande;
			std::cout << "Nickname : ";
    		std::cin >> commande;
			contact[c_index].nickname = commande;
			std::cout << "Phone number : ";
    		std::cin >> commande;
			contact[c_index].phone_number = commande;
			std::cout << "\x1b[38;5;1mYOUR FUCKING DARKEST SECRET : \x1b[37m";
    		std::cin >> commande;
			contact[c_index].last_name = commande;
			c_index++;
		}
		else if (flag == 1) {
			std::string value;
			std::size_t value_index = 0;
			std::cout << "\e[0;34m		CONTACTS		\e[0;37m" << std::endl << std::endl;
			for (std::size_t i = 0; i < c_index; i++) {
				for (std::size_t k = 0; k < 4; k++) {
					if (value_index == 0)
						value = std::to_string(c_index);
					else if (value_index == 1)
						value = contact[c_index].first_name;
					else if (value_index == 2)
						value = contact[c_index].last_name;
					else if (value_index == 3)
						value = contact[c_index].nickname;
					for (std::size_t j = 0; j < 10; j++) {
						if (value[j])
							std::cout << static_cast<char>(value[j]);
						else
							std::cout << " ";
					}
					value_index++;
					std::cout << "|";
				}
				std::cout << std::endl;
			}
		}
		else if (flag == 2)
			exit(EXIT_SUCCESS);
	}
};

int main(int argc, char **argv) {
	PhoneBook phonebook;
	for (;;) {
		std::string commande;
    	std::cout << "ADD, SEARCH, EXIT : ";
    	std::cin >> commande;
		std::size_t flag = -1;
		if (!commande.compare("ADD"))
			flag = 0;
		else if (!commande.compare("SEARCH"))
			flag = 1;
		else if (!commande.compare("EXIT"))
			flag = 2;
		else if (flag == -1)
			std::cout << "Error : Wrong command" << std::endl;
		if (flag != -1)
			phonebook.Wish_Contact(flag);
	}
}