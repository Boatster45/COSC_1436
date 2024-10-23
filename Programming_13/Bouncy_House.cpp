// Bouncy_House.cpp
// Created by Johnathan Kissee
// 10/23/24

#include <iostream>
#include <iomanip>  
using namespace std;

int main() {

    // Constants/Variables
    const double k = 3;       // Constant k jump coefficient
    const double PersonA_weight = 70; // Constant Person A weight
    double PersonB_weight = 40; // Starting weight person B
    double PersonA_height;      // Height person A

    // Intro Message
    cout << "\t||| Bouncy House Bounce Height |||\n" << endl;

    // Output table header
    cout << "Weight of Person B (kg)    Height of Person A (m)" << endl;
    cout << "----------------------------------------------------" << endl;

    // While loop to calculate height
    while (PersonB_weight <= 150) {
        PersonA_height = k * (PersonB_weight / PersonA_weight); // Calc bounce height using the equation: hA = k * (wB / wA)
        cout << fixed << setprecision(1); // Set 1 decimal place
        cout << PersonB_weight << "kg\t\t\t" << PersonA_height << "m" << endl;

        PersonB_weight += 10; // Increment Person B weight by 10kg
    }

    return 0;
}
