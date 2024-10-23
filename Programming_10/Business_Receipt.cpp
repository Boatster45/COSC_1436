// Created by Johnathan Kissee
// 10/7/2024

#include <iostream>
#include <fstream>  

using namespace std;

int main() {
    double item1Cost, item2Cost, item3Cost;

    ifstream inputFile("customer_data.txt");   
    ofstream outputFile("receipt.txt");        
    
    inputFile >> item1Cost >> item2Cost >> item3Cost;

    inputFile.close();

    double totalCost = item1Cost + item2Cost + item3Cost;

    outputFile << "Customer Purchase Receipt\n";
    outputFile << "-------------------------\n";
    outputFile << "Hot Dogs: $" << item1Cost << endl;
    outputFile << "French fries: $" << item2Cost << endl;
    outputFile << "Cheeseburger: $" << item3Cost << endl;
    outputFile << "-------------------------\n";
    outputFile << "Total Cost: $" << totalCost << endl;

    outputFile.close();

    cout << "Receipt written to receipt.txt." << endl;

    return 0;
}
