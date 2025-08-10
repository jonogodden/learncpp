#include <iostream>
#include <vector>
#include <string>

void vectors() {

	std::vector<std::vector<int>> vectorman(10, std::vector<int>(10));

	int count = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			vectorman[i][j] = count++;
		}
	}

	if (!vectorman.empty()) {

		std::cout << "vector printed:\n\n";

		for (std::vector<std::vector<int>>::iterator rowIt = vectorman.begin(); rowIt != vectorman.end(); rowIt++) {
			for (std::vector<int>::iterator colIt = rowIt->begin(); colIt != rowIt->end(); colIt++) {
				std::cout << *colIt << "\t";
			}
			std::cout << "\n";
		}
	}
	else {
		std::cout << "vector is empty!\n\n";
	}

	std::cout << "vector size = " << std::to_string(vectorman.size()) << "\n\n";

}