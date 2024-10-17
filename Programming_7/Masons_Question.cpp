//
//  Masons_Question.cpp
//  
//
//  Created by Bruce Gooch on 2/23/22.
//

#include <iostream>
using namespace std;

int main()
{
    
    int Red_Marbles = 0;
    int Black_Marbles = 0;
    int White_Marbles = 0;
    
    double redMarbleCost = 0.02;
    double blackMarbleCost = 0.03;
    double whiteMarbleCost = 0.01;
    
    cout << "How many Red marbles do you have? ";
    cin >> Red_Marbles;
    cout << endl << endl;
    
    cout << "How many Black marbles do you have? ";
    cin >> Black_Marbles;
    cout << endl << endl;
    
    cout << "How many White marbles do you have? ";
    cin >> White_Marbles;
    cout << endl << endl;
    
    
    cout << "You have " << Red_Marbles << " Red Marbles, "<< Black_Marbles << " Black Marbles, and " << White_Marbles << " White Marbles." << endl;
    
    cout << "Your total number of marbles is " << Red_Marbles + Black_Marbles + White_Marbles << endl;
    
    int Total_Marbles = Red_Marbles + Black_Marbles + White_Marbles;
    cout << "Your total number of marbles is " << Total_Marbles << endl;
    
    cout << "The cost of " << Red_Marbles << " Red Marbles is " << Red_Marbles * redMarbleCost << endl;
    
    cout << "If you buy " << Red_Marbles << " Red marbles a day during the month of March you will spend " << 31 * (Red_Marbles * redMarbleCost) << endl;
    
    return 0;
}
