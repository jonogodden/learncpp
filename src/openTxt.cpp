#include "openTxt.hpp"
#include <iostream>
#include <fstream>

int readAndPrintFile(const std::string& filePath) {
    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cerr << "File could not be opened: " << filePath << "\n";
        return 1;
    }

    std::string line;
    std::string fileContent;

    while (std::getline(file, line)) {
        fileContent += line + "\n";
    }

    file.close();

    std::cout << fileContent;

    return 0;
}


/* 
THIS GOES IN MAIN
if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <file_path>\n";
        return 1;
    }

    std::string filePath = argv[1];
    return readAndPrintFile(filePath);
 */