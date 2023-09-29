#include <iostream>

#include "cypher.h"

int cypher::calcShift(std::string& passwd) {
	int _t1 = 0;
	for (int i = 0; i < passwd.length(); i++) {
		_t1 = _t1 + (int)passwd[i];
		//std::cout << "_t1 = " << _t1 << "\ti = " << i << "\tpasswd[i] = " << passwd[i] << "\t(int)passwd[i] = " << (int)passwd[i] << "\n";
	}
	//std::cout << _t1 << "\n" << passwd.length() << "\n" << (int)(_t1 / passwd.length()) << "\n" << (int)((int)(_t1 / passwd.length()) % 26);
	return (int)((int)(_t1 / passwd.length()) % 26);
}

void cypher::basicShiftOfASCII(std::string& inputString, std::string& passwd, bool& mode) {
	int shift = calcShift(passwd);

	if (!mode) shift = shift * -1;

	for (int i = 0; i < inputString.length(); i++) {
		inputString[i] = (char)((int)inputString[i] + shift);
	} 
}
