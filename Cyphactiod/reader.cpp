#include <iostream>
#include <fstream>
#include <string>

#include "reader.h"
#include "cypher.h"

void reader::encryptFile(std::ifstream& irFile, std::ofstream& owFile, std::string& passwd, bool& mode) {
	std::string str;
	while (std::getline(irFile, str)) {
		//Encrypt the string
		//std::cout << "Normal : " << str << std::endl;
		cypher::basicShiftOfASCII(str, passwd, mode);
		//std::cout << "NOTNormal : " << str << std::endl;
		owFile << str << "\n";
	}
}
