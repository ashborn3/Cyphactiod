// Cyphactiod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#include "reader.h"
#include "cypher.h"


class Cyphactiod {
private:
    //Data Members
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string passwd;
    bool mode;


public:
    Cyphactiod(std::string inputPath, std::string outputPath, std::string passwd, bool mode) {
        inputFile.open(inputPath);
        outputFile.open(outputPath);
        this->passwd = passwd;
        this->mode = mode;
    }

    ~Cyphactiod() {
        inputFile.close();
        outputFile.close();
        std::cout << "Files Closed\n";
    }

    void cypherFile() {
        reader::encryptFile(inputFile, outputFile, passwd, mode);
    }

};


int main()
{
    std::cout << "FileCypherInCPP!\n";

    std::string inputPath, outputPath, passwd;
    bool mode;

    std::cout << "Enter File Path : ";
    std::cin >> inputPath;
    std::cout << "Enter Output File Path : ";
    std::cin >> outputPath;
    std::cout << "Enter PASSWORD : ";
    std::cin >> passwd;
    std::cout << "Enter Encrypt(0) Decrypt(1) : ";
    std::cin >> mode;

    Cyphactiod cypher(inputPath, outputPath, passwd, mode);

    cypher.cypherFile();

    std::cout << "File Encrypted\n";

    return 0;
}
