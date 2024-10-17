// Nascar_Driver.cpp
// Created by Johnathan Kissee
// 10/14/24
#include <iostream>
using namespace std;

int main() {
    int turn;
    // Introduction Output
    cout << "||| Welcome to the Nascar Racing Simulator |||\n";

    cout << "Start your journey! Choose Turn One:\n";
    cout << "1. Turn Right \n";
    cout << "2. Turn Left \n";
    cin >> turn;
    // Main logic
    if (turn == 1) {
        cout << "You slammed into the wall. Game Over!" << endl;
        return 0;
    } 
    
    else if (turn == 2) {
        cout << "You advance to Turn Two. Choose:\n";
        cout << "1. Turn Right \n";
        cout << "2. Turn Left \n";
        cin >> turn;

        if (turn == 1) {
            cout << "You crashed through the barrier. Game Over!" << endl;
            return 0;

        } 
        
        else if (turn == 2) {
            cout << "You advance to Turn Three. Choose:\n";
            cout << "1. Turn Right \n";
            cout << "2. Turn Left \n";
            cin >> turn;

            if (turn == 2) {
                cout << "You advance to Turn Four. Choose:\n";
                cout << "1. Turn Right \n";
                cout << "2. Turn Left \n";
                cin >> turn;

                if (turn == 1) {
                    cout << "You made history with the 'Agony of Defeat' face. Game Over!" << endl;
                } 
                
                else {
                    cout << "You raced to the checkered flag and achieved sports immortality!" << endl;
                }
            } 
            
            else {
                cout << "You gently nudged into last place. Game Over!" << endl;
            }
        }
    }
    
    return 0;
}
