#pragma once

namespace reader {
	void encryptFile(std::ifstream& irFile, std::ofstream& owFile, std::string& passwd, bool& mode);
}