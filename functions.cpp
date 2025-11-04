#include <iostream> 
#include <vector> 
#include "functions.h"
using namespace std;

void displayGridOnly(const vector<vector<char>> &grid){

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
}

}
void updateAndDisplayGrid(vector<vector<char>> &grid, char let, vector<int> rowCol) {
    grid[rowCol[0]][rowCol[1]] = let;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
}
}


char getLetter(){
    char let;
    cout << "X or O?:";
    cin >> let;
    let = tolower(let);
        if(let != 'x' && let != 'o'){ //returns invalid input if let isnt x or o
            cout << "Invalid input\n";           
    }
    return let; 
}

    vector<int> getRowColumn(){
        int row, column;
        cout << "Enter the row and column: \n";
        cin >> row >> column;
        return {row, column};
    }
