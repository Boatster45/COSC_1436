// Computer_Graphics2.cpp
// Created by Johnathan Kissee
// 10/29/24

#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int rows = 6; 
    
    for (int i = 0; i < rows; i++) {
       
        for (int j = 0; j < i * 2; j++) { 
            cout << " ";
        }
        cout << "#" << endl; 
    }
    
    return 0;
}