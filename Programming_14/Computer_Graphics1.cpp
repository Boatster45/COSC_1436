// Computer_Graphics1.cpp
// Created by Johnathan Kissee
// 10/29/24

#include <iostream>
#include <iomanip>  
using namespace std;


#include <iostream>
using namespace std;

int main() {
    int rows = 7; 
    

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows - i; j++) {
            cout << "*";
        }
        cout << endl;

    }
}