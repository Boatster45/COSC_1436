// Computer_Graphics1.cpp
// Created by Johnathan Kissee
// 10/29/24

#include <iostream>
#include <iomanip>  
#include <stdio.h>
#include <string>
using namespace std;

// Declare functions
void triangleOut();
void diagonalOut();
void nameOut();

//Add function calls to main
int main() {
    triangleOut();
    diagonalOut();
    nameOut();
    return 0;
}

// Decreasing "*" triangle out
void triangleOut() {
    int rows = 7; 
    cout << "Pattern 1\n" << endl;
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows - i; j++) {
            cout << "*";
        }
        cout << endl;
        
    }
    cout << "------------" << endl;
}
// Diagonal "#" pattern out
void diagonalOut() {
    int rows = 6; 
    cout << "Pattern 2\n" << endl;
    for (int i = 0; i < rows; i++) {
       
        for (int j = 0; j < i * 2; j++) { 
            cout << " ";
        }
        cout << "#" << endl; 
    }
    cout << "------------" << endl;
}
// Print name with custom box pattern
void nameOut() {
    string name = "Johnathan";
    int rows = 7; //set rows
    int cols = 5; //set columns
    cout << "Pattern 3\n" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1 || (i == rows / 2 && j % 2 == 0)) {
                cout << name << " "; //print spaces between names
            } else {
                cout << "          "; //add spaces to each end
            }
        }
        cout << endl;
    }
}