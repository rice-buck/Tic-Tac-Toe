#include <iostream>
#include "functions.h"
#include <vector>
using namespace std;

int main(){
    int i = 0;
    char letter; // stores x or o from getLetter()
    vector<int> rowCol; //stores row and col from getRowColumn()

    vector<vector<char>> grid(3, vector<char>(3, '-'));

    displayGridOnly(grid);
    
while(i < 6){

    letter = getLetter();

    rowCol = getRowColumn();
    
    updateAndDisplayGrid(grid, letter, rowCol);
    

    i++;
}
}