//
// Change_In_A_Foreign_Land
// Created by Johnathan Kissee
//

#include <iostream>
using namespace std;

int main()
{
    float Dollar_USD; // List variable Dollar_USD
    cout << "Enter USD amount: "; // Output dollar amount
    cin >> Dollar_USD; // Write the output to Dollar_USD
    float Franc_Val = Dollar_USD * 5.8949417; // Conversion factor of 5.8949417
    cout << Dollar_USD << " USD is worth " <<  Franc_Val << " in French Francs" << endl; // Output the Dollar_USD and Franc_Val

    return 0;  
}