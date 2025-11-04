#include <iostream> 
#include <vector> 
#include "functions.h"
using namespace std;

void displayGrid(){
    //3x3 char vector
    //outer vector has 3 rows, each inner vector has 3 columns
    vector<vector<char> > grid(3, vector<char>(3,' '));

    grid[0][0] = 'X'; //test outputs
    grid[1][1] = 'X';
    grid[2][2] = 'X';

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
}

}
char letInput(){
    char let; 
    cout << "X or O?";
    cin >> let; 
    return let;
}
