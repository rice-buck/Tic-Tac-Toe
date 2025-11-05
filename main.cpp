#include <iostream>
#include "functions.h"
#include <vector>
using namespace std;

int main(){
    int i = 0;
    char letter; // stores x or o depending on player 1 or 
    vector<int> rowCol; //stores row and col from getRowColumn()

    cout << "===========\nTic-Tac-Toe\n===========\n\n";
    vector<vector<char>> grid(3, vector<char>(3, '-')); //initial grid 

    displayGridOnly(grid);
    
while(i < 4){ //two plays every iteration

    letter = playerXTurn();         //order goes: players turn, get row and column, display grid based off input, check for win, repeat

    rowCol = getRowColumn();
    
    updateAndDisplayGrid(grid, letter, rowCol);

    checkForWin(grid);

    letter = playerOTurn();

    rowCol = getRowColumn();

    updateAndDisplayGrid(grid, letter, rowCol);

    checkForWin(grid);
    
    i++;
}
    cout << "Draw!\n"; //if eight plays happen its a draw
return 0;

}