#pragma once

namespace cypher {
	int calcShift(std::string& passwd);
	void basicShiftOfASCII(std::string& inputString, std::string& passwd, bool& mode);
}