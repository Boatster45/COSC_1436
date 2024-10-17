//Roller_Coaster.cpp
//Created by Johnathan Kissee
//10/14/24

#include <iostream>
#include <string>
using namespace std;

int main() {
    string candiceWatching, weatherResult, coinFlip, fishStickType;

    // Ask if Candice Watching
    cout << "Is Candice watching? (YES/NO): ";
    cin >> candiceWatching;

    if (candiceWatching == "YES") {
        cout << "Phineas and Ferb will work on a geometric proof under a tree." << endl;
    } else if (candiceWatching == "NO") {
        // Check the weather condition
        cout << "Enter the weather condition (COLD/HOT): ";
        cin >> weatherResult;

        if (weatherResult == "COLD") {
            cout << "Phineas and Ferb will build a 'Pizza Oven' Coaster to warm up and provide snacks." << endl;
        } 
        else if (weatherResult == "HOT") {
            // Ask coin flip result
            cout << "Flip a coin? (HEADS/TAILS): ";
            cin >> coinFlip;

            if (coinFlip == "HEADS") {
                cout << "Phineas and Ferb will build an Ice Box coaster inside a giant refrigerator." << endl;
            } 
            else if (coinFlip == "TAILS") {
                cout << "Phineas and Ferb will create a log flume serving fish sticks." << endl;
                // Ask fish stick preparation
                cout << "How will the fish sticks be prepared? (FROZEN/MICROWAVED): ";
                cin >> fishStickType;

                if (fishStickType == "FROZEN") {
                    cout << "Phineas and Ferb chose 'Extra Crunchy' fish sticks." << endl;
                } 
                else if (fishStickType == "MICROWAVED") {
                    cout << "Phineas and Ferb chose fish sticks that are 'Surface of the Sun' hot." << endl;
                }
            }
        }
    }
    return 0;
}
