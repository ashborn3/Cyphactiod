#include <iostream>
#include <fstream>
#include <string>

void encryptFile(std::ifstream& irFile, std::ofstream& owFile) {
	std::string str;
	while (std::getline(irFile, str)) {
		//Encrypt the string
		owFile << str << "\n";
	}
}
