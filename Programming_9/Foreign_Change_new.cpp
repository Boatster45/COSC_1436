// 10/14/2024
// Foreign_Change_From_A_File
// Created by Johnathan Kissee
//

#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    // Declare variables
    int pennies, nickels, dimes, quarters;

    // Declare a file input stream 
    ifstream infile("coin_data.txt");  // Assume the file is named "coin_data.txt"

    // Read the number of each type of coin from file
    infile >> pennies >> nickels >> dimes >> quarters;

    // Close the file after reading
    infile.close();

    // Output the number of coins
    cout << "Number of pennies: " << pennies << endl;
    cout << "Number of nickels: " << nickels << endl;
    cout << "Number of dimes: " << dimes << endl;
    cout << "Number of quarters: " << quarters << endl;

    float totalUSD = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

    // Output total
    cout << "Total USD value from coins: $" << totalUSD << endl;

    // Convert to Francs
    float Franc_Val = totalUSD * 5.8949417; // Conversion factor to Francs
    cout << totalUSD << " USD is worth " << Franc_Val << " in French Francs" << endl; // Output 

    return 0;
}
