#include <iostream> 
#include <vector> 
#include "functions.h"
using namespace std;

void displayGrid(){
    std::vector<std::vector<char>>charMatrix(3,std::vector<char>(3,' '));

    charMatrix[0][0] = 'A';
    charMatrix[1][1] = 'B';
    charMatrix[2][2] = 'C';

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << charMatrix[i][j] << " ";
        }
        std::cout << std::endl;
}

}