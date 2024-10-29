// Computer_Graphics3.cpp
// Created by Johnathan Kissee
// 10/29/24

#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    string name = "Johnathan Kissee";
    int rows = 7;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1 || (i == rows / 2 && j % 2 == 0)) {
                cout << name << " ";
            } else {
                cout << "                 ";
            }
        }
        cout << endl;
    }

    return 0;
}