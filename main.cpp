#include <iostream>
#include "functions.h"
#include <vector>
using namespace std;

int main(){
    int i = 0;
    char letter; // stores x or o from getLetter()
    vector<int> rowCol; //stores row and col from getRowColumn()
    
while(i < 2){
    letter = getLetter();

    rowCol = getRowColumn();
    
    displayGrid(letter, rowCol);



    
    i++;
}
}