// Texas_Lotto.cpp
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
    cin >> user1 >> user2 >> user3;
    int dollarTrack = 0, lottoTrials = 1, winCount = 0, loseCount = 0;
    srand(time(NULL));

    while (lottoTrials <= 10000) {
        int numRand1 = rand() % 10;
        int numRand2 = rand() % 10;
        int numRand3 = rand() % 10;
        if (user1 == numRand1 && user2 == numRand2 && user3 == numRand3) {
            dollarTrack +=499;
            winCount += 1;
        }
        else {
            dollarTrack -=1;
            loseCount -=1;
        }
        lottoTrials +=1;
    }
    cout << "\n -----Final Tally------" << endl;
    cout << "Games won: " << winCount << endl;
    cout << "Games lost: " << loseCount << endl;
    cout << "Amount earned " << dollarTrack << endl;
}