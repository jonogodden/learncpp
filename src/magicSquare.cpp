#include <iostream>
#include <vector>
#include <set>
#include <string>
#include "magicSquare.hpp"

void testMagicSquare() {
    // a 4x4 magic square
    std::vector<std::vector<int>> matrix = {
        {4, 14, 15, 1},
        {9, 7, 6, 12},
        {5, 11, 10, 8},
        {16, 2, 3, 13}
    };

    // false flag for whether the square is magic
    bool notMagicSum = false;

    // identify matrix size
    int size = matrix.size();
    std::cout << "Array size is " << std::to_string(size) << "x" << std::to_string(size ) << std::endl << std::endl;

    // print magic square to console
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j];
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // test all numbers are unique
    std::set<int> unique;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            unique.insert(matrix[i][j]);
        }
    }

    int uniqueSize = unique.size();
    for (std::set<int>::iterator it = unique.begin(); it != unique.end(); it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    std::cout << std::endl;

    if ((size * size) != uniqueSize) {
        std::cout << "not unique numbers";
        notMagicSum = true;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    

    // identify comparitor
    int magicSum = 0;

    for (int j = 0; j < size; j++) {
        magicSum += matrix[0][j];
    }

    std::cout << magicSum;
    std::cout << std::endl << std::endl;

    // test Rows against comparitor
    for (int i = 0; i < size; i++) {
        int rowSum = 0;
        for (int j = 0; j < size; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != magicSum) {
            std::cout << "FALSE " << "Row " + std::to_string(i) + " does not add to magic sum!" << std::endl;
            notMagicSum = true;
        }
        else {
            std::cout << "Row " + std::to_string(i) + " adds to magic sum!" << std::endl;
        }
    }

    std::cout << std::endl;

    // test Coluimns against comparitor
    for (int j = 0; j < size; j++) {
        int colSum = 0;
        for (int i = 0; i < size; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != magicSum) {
            std::cout << "FALSE " << "Column " + std::to_string(j) + " does not add to magic sum!" << std::endl;
            notMagicSum = true;
        }
        else {
            std::cout << "Column " + std::to_string(j) + " adds to magic sum!" << std::endl;
        }
    }
    std::cout << std::endl;

    // test Leading Diagonal against magic sum

    int diagonalSum = 0;
    for (int i = 0; i < size; i++) {
        diagonalSum += matrix[i][i];
    }
    if (diagonalSum != magicSum) {
        std::cout << "FALSE " << "Leading Diagonal does not add to magic sum!" << std::endl;
        notMagicSum = true;
    }
    else {
        std::cout << "Leading Diagonal adds to magic sum!" << std::endl;
    }
 
    std::cout << std::endl;
    

    // Test reverse Diagonal

    int revDiagonalSum = 0;
    for (int i = size - 1, j = 0; i >= 0 && j < size; i--, j++) {
        revDiagonalSum += matrix[i][j];
    }
    if (revDiagonalSum != magicSum) {
        std::cout << "FALSE " << "Reverse Diagonal does not add to magic sum!" << std::endl;
        notMagicSum = true;
    }
    else {
        std::cout << "Reverse Diagonal adds to magic sum!" << std::endl;
    }

    std::cout << std::endl;

    if (notMagicSum == false) {
        std::cout << "Array is a magic square" << std::endl;
    }
    else {
        std::cout << "Array is not a magic square" << std::endl;
    }
    }
