// Pick3Simluation.cpp
// Created by Johnathan Kissee
// 11/4/24

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main () {
    int user1;
    int user2;
    int user3;
    cout << "----- Welcome to the Texas Lottery Pick3 -----" << endl;
    cout << "\n Enter three lotto number picks: " << endl;
    cin >> user1 >> user2 >> user3; // Input user numbers
    int dollarTrack = 0, lottoTrials = 1, winCount = 0, loseCount = 0; // Set int variables
    srand(time(NULL));

    while (lottoTrials <= 10000) {
        int numRand1 = rand() % 10; //Randomize the numbers
        int numRand2 = rand() % 10;
        int numRand3 = rand() % 10;
        if (user1 == numRand1 && user2 == numRand2 && user3 == numRand3) { // Set the users to the numbers
            dollarTrack +=499; // increase dollarTrack per win count if equal
            winCount += 1; 
        }
        else {
            dollarTrack -=1; // Decrease dollarTrack per lose count
            loseCount -=1;
        }
        lottoTrials +=1; // Increase pick3 trials
    }
    //Display total outputs
    cout << "\n -----Final Tally------" << endl;
    cout << "Games won: " << winCount << endl;
    cout << "Games lost: " << loseCount << endl;
    cout << "Amount earned: $" << dollarTrack << endl;
}