// Zodiac_Sign.cpp
// Created by Johnathan Kissee
// 10/21/24

#include <iostream>

using namespace std;

int main() {
    // Variables for birth month/day input
    int Birth_month, Birth_day;
    
    // Variable for Zodiac sign
    string zodiacSign;
    
    // Welcome message
    cout << "||| Zodiac Sign Identifier |||\n";

    // Prompt user input
    cout << "Enter your birth month (1-12): ";
    cin >> Birth_month;
    cout << "Enter your birth day (1-31): ";
    cin >> Birth_day;
    
    // Zodiac sign with birth month
    switch (Birth_month) {
        case 1: // Jan
            if (Birth_day <= 19) {
                zodiacSign = "Capricorn";
            } 
            else {
                zodiacSign = "Aquarius";
            }
            break;
        case 2: // Feb
            if (Birth_day <= 17) {
                zodiacSign = "Aquarius";
            } 
            else {
                zodiacSign = "Pisces";
            }
            break;
        case 3: // March
            if (Birth_day <= 19) {
                zodiacSign = "Pisces";
            } 
            else {
                zodiacSign = "Aries";
            }
            break;
        case 4: // April
            if (Birth_day <= 19) {
                zodiacSign = "Aries";
            } 
            else {
                zodiacSign = "Taurus";
            }
            break;
        case 5: // May
            if (Birth_day <= 20) {
                zodiacSign = "Taurus";
            } 
            else {
                zodiacSign = "Gemini";
            }
            break;
        case 6: // June
            if (Birth_day <= 20) {
                zodiacSign = "Gemini";
            } 
            else {
                zodiacSign = "Cancer";
            }
            break;
        case 7: // July
            if (Birth_day <= 22) {
                zodiacSign = "Cancer";
            } 
            else {
                zodiacSign = "Leo";
            }
            break;
        case 8: // August
            if (Birth_day <= 22) {
                zodiacSign = "Leo";
            } 
            else {
                zodiacSign = "Virgo";
            }
            break;
        case 9: // Sep
            if (Birth_day <= 22) {
                zodiacSign = "Virgo";
            } 
            else {
                zodiacSign = "Libra";
            }
            break;
        case 10: // Oct
            if (Birth_day <= 22) {
                zodiacSign = "Libra";
            } 
            else {
                zodiacSign = "Scorpio";
            }
            break;
        case 11: // Nov
            if (Birth_day <= 21) {
                zodiacSign = "Scorpio";
            } 
            else {
                zodiacSign = "Sagittarius";
            }
            break;
        case 12: // Dec
            if (Birth_day <= 21) {
                zodiacSign = "Sagittarius";
            } 
            else {
                zodiacSign = "Capricorn";
            }
            break;
        default:
            zodiacSign = "Invalid month inputted";
    }
    
    // Display the Zodiac sign
    if (zodiacSign != "Invalid month inputted") {
        cout << "\nYour Zodiac sign is " << zodiacSign << "." << endl;
    } 
    else {
        cout << zodiacSign << endl;
    }

    return 0;
}
