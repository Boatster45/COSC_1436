// MadLib2.cpp
// Created by Johnathan Kissee
// 09/23/2024

#include <iostream>
using namespace std;

int main() {

    // Declare variables for User Input
    string properNoun, noun1, adjectiveFeeling1, verb1, adjectiveFeeling2, animal1;
    string verb2, color1, verbEndingIn_Ing, adverbEndingIn_Ly, number1, measureOfTime;
    string color2, animal2, number2, sillyWord, noun2;

    // Print the Madlib prompt
    cout << "This weekend I am going camping with ________. I packed my lantern, sleeping bag, and ________.\n"
         << "I am so ________ to ________ in a tent. I am ________ we might see a ________, they are kind of dangerous.\n"
         << "We are going to hike, fish, and ________________. I have heard that the ________ lake is great for ________.\n"
         << "Then we will ________ hike through the forest for ________ ________.\n"
         << "If I see a ________ ________ while hiking, I am going to bring it home as a pet!\n"
         << "At night we will tell ________ _______ stories and roast ________ around the campfire!!" << endl;


    // User Input for all 17 possible inputs
    cout << "\n1. Proper Noun (Person’s Name): ";
    getline(cin, properNoun);

    cout << "2. Noun: ";
    getline(cin, noun1);

    cout << "3. Adjective (Feeling): ";
    getline(cin, adjectiveFeeling1);

    cout << "4. Verb: ";
    getline(cin, verb1);

    cout << "5. Adjective (Feeling): ";
    getline(cin, adjectiveFeeling2);

    cout << "6. Animal: ";
    getline(cin, animal1);

    cout << "7. Verb: ";
    getline(cin, verb2);

    cout << "8. Color: ";
    getline(cin, color1);

    cout << "9. Verb (ending in -ing): ";
    getline(cin, verbEndingIn_Ing);

    cout << "10. Adverb (ending in -ly): ";
    getline(cin, adverbEndingIn_Ly);

    cout << "11. Number: ";
    getline(cin, number1);

    cout << "12. Measure of Time: ";
    getline(cin, measureOfTime);

    cout << "13. Color: ";
    getline(cin, color2);

    cout << "14. Animal: ";
    getline(cin, animal2);

    cout << "15. Number: ";
    getline(cin, number2);

    cout << "16. Silly Word: ";
    getline(cin, sillyWord);

    cout << "17. Noun: ";
    getline(cin, noun2);

    // Output the finished story with User Input
    cout << "\nThis weekend I am going camping with " << properNoun << ". I packed my lantern, sleeping bag, and "
         << noun1 << ". I am so " << adjectiveFeeling1 << " to " << verb1 << " in a tent. I am " 
         << adjectiveFeeling2 << " we might see a " << animal1 << ", they are kind of dangerous. We are going to hike, fish, and "
         << verb2 << ". I have heard that the " << color1 << " lake is great for " << verbEndingIn_Ing << ". Then we will "
         << adverbEndingIn_Ly << " hike through the forest for " << number1 << " " << measureOfTime << ". If I see a "
         << color2 << " " << animal2 << " while hiking, I am going to bring it home as a pet! At night we will tell "
         << sillyWord << " stories and roast " << noun2 << " around the campfire!!" << endl;

    return 0;
}
