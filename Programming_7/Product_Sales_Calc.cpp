// Product Sales Calculator
// Created by Johnathan Kissee
// 09/27/2024

#include <iostream>
using namespace std;

int main() {
    // List Variables in double
    double cheapSold, middleSold, crazySold;
    double incomeCheap, incomeMiddle, incomeCrazy, totalIncome;

    // Set fixed price
    double cheapCost = 10;
    double middleCost = 100;
    double crazyCost = 500;

    // Input data into variables
    cout << "Product Sales Calculator" << endl;

    cout << "\nEnter the amount of gummy bears sold: ";
    cin >> cheapSold;

    cout << "Enter the amount of super life-sized gummy bears sold: ";
    cin >> middleSold;

    cout << "Enter the amount of ultra crazy 50ft gummy bears sold: ";
    cin >> crazySold;

    // Calculate income 
    incomeCheap = cheapCost * cheapSold;
    incomeMiddle = middleCost * middleSold;
    incomeCrazy = crazyCost * crazySold;
    totalIncome = incomeCheap + incomeMiddle + incomeCrazy;

    // Output the income from each category
    cout << "\nIncome from gummy bears: $" << incomeCheap << endl;
    cout << "Income from super life-sized gummy bears: $" << incomeMiddle << endl;
    cout << "Income from ultra crazy 20ft gummy bears: $" << incomeCrazy << endl;

    // Output totalIncome
    cout << "\nTotal Income: $" << totalIncome << endl;

    return 0;
}
