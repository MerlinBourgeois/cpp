#include <iostream>
#include <fstream>

std::string execReplace(std::string s1, std::string s2, std::string buff) {
	if (s1 == "")
		return buff;	
	int N = 0;
	N = buff.find(s1);
	while (N != std::string::npos) {
		buff.erase(N, s1.size());
		buff.insert(N, s2);
		N = buff.find(s1, N + s2.size());
	}
	std::cout << buff << std::endl;
	return buff;
}

int main(int argc, char **argv)	{
	if (argc != 4)	{
		std::cout << "3 arguments requis mon coquin !" << std::endl;
		return (1);
	}
	std::string infile = argv[1];
	std::fstream fs;
	fs.open(infile);
	if (!fs.is_open())	{
		std::cout << "Le fichier est pas valide mon frero !" << std::endl;
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buff;
	std::string tmp;
	while (!fs.eof()) {
		std::getline(fs, tmp);
		buff += tmp;
		buff += '\n';
	}
	buff.pop_back();
	std::string outfile = infile + ".replace";
	std::fstream fout;
	fout.open(outfile, std::ios::out);
	fout << execReplace(s1, s2, buff);
	fs.close();
	fout.close();
}