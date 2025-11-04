#include <iostream> 
#include <vector> 
#include "functions.h"
using namespace std;

void displayGrid(char let, vector<int> rowCol){
    //3x3 char vector
    //outer vector has 3 rows, each inner vector has 3 columns
    vector<vector<char> > grid(3, vector<char>(3,' '));

    int r = rowCol[0];
    int c = rowCol[1];

    grid[r][c] = let; //uses the values of rowCol and puts the letter there

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
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
