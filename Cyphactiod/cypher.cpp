#include <iostream>

int calcShift(std::string& passwd) {
	int _t1 = 0;
	for (int i = 0; i < passwd.length(); i++) {
		_t1 = _t1 + (int)passwd[i];
	}
	return (int)((int)(_t1 / passwd.length()) % 26);
}

void basicShiftOfASCII(std::string& inputString, std::string& passwd, bool& mode) {
	int shift = calcShift(passwd);

	if (!mode) shift = shift * -1;

	for (int i = 0; i < inputString.length(); i++) {
		inputString[i] = (char)((int)inputString[i] + shift);
	} 
}
