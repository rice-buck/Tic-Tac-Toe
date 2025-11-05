#include <iostream> 
#include <vector> 
#include "functions.h"
#include <cstdlib>
using namespace std;

void displayGridOnly(const vector<vector<char>> &grid){
                                    //used to display starting grid 
    for (int i = 0; i < 3; ++i) {   //only displays the grid, doesnt change any values 
        for (int j = 0; j < 3; ++j) {  
            cout << grid[i][j] << " ";
        }
        cout << endl;
}
    cout << endl;
}
void updateAndDisplayGrid(vector<vector<char>> &grid, char let, vector<int> rowCol) { //updates values based on input then displays that grid 
    while (grid[rowCol[0]][rowCol[1]] != '-'){ //checks if spot has already been played in
        cout << "That spot was alreay taken! Try again!" << endl;
        rowCol = getRowColumn(); // asks for row and column again 
    }
    grid[rowCol[0]][rowCol[1]] = let;

    for (int i = 0; i < 3; ++i) { //displays grid
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
}
    cout << endl;
}

    vector<int> getRowColumn(){
        int row, column;
        do {cout << "Enter the row and column: \n";
        cin >> row >> column;
        if (row == 21) {    //enter 21 in row input to end program (for testing)
            cout << "Program ended"; 
            exit(EXIT_SUCCESS);
        } else if (row < 0 || row > 2 || column < 0 || column > 2) { //checks for valid row and column
            cout << "Invalid Input! Try again.\n";
        }   
    } while (row < 0 || row > 2 || column < 0 || column > 2); //repeats if invalid input
    return {row, column};
    }

    char playerXTurn(){ //sets let to X for PlayerX's turn
        cout << "Player X your turn!\n";
        char let = 'X';
        return let;
    }

    char playerOTurn(){ //sets let to O for PlayerO's turn
        cout << "Player O your turn!\n";
        char let = 'O';
        return let;
    }

    void checkForWin(vector<vector<char>> &grid){ //compares values in grid to see if there's any winner yet
        for (int i = 0; i < 3; i++){
            //rows (when an entire column is filled)
            if(grid[i][0] != '-' && grid[i][0] == grid[i][1] &&  grid[i][1] == grid[i][2]){
                cout << "Player " << grid[i][0] << " wins!\n";
                exit(EXIT_SUCCESS);
            }
            //columns (when an enitre row is filles)
            if(grid[0][i] != '-' && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]){
                cout << "Player " << grid[0][i] << " wins!\n";
                exit(EXIT_SUCCESS);
        }
    }
            //diagonals
            if(grid[0][0] != '-' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
                cout << "Player " << grid[0][0] << " wins!\n";
                exit(EXIT_SUCCESS);
        }
            if (grid[0][2] != '-' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
                cout << "Player " << grid[0][2] << " wins!\n";
                exit(EXIT_SUCCESS);
        }
    }