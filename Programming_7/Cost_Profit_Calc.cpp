// Cost and Profit Calculator
// Made by Johnathan Kissee
// 09/28/2024

#include <iostream>
using namespace std;

int main() {

    // Variables to store input
    string flowerType;
    double wholesaleCost, laborCost, packagingCost;
    double numberOfFlowers, cat1Sold, cat2Sold, cat3Sold;

    // Prices for Categories
    double costCat1 = 5.0;
    double costCat2 = 10.0;
    double costCat3 = 15.0;

    // 1st Message
    cout << "------Event Flowers Cost and Profit Calculator------" << endl;

    // User input
    cout << "\nEnter the type of flower: ";
    cin >> flowerType;

    cout << "Enter the wholesale cost of flowers (per unit): $";
    cin >> wholesaleCost;

    cout << "Enter the price of labor: $";
    cin >> laborCost;

    cout << "Enter the cost of packaging: $";
    cin >> packagingCost;

    cout << "Enter the number of flowers (in thousands): ";
    cin >> numberOfFlowers;

    cout << "Enter the number of Category 1 arrangements sold: ";
    cin >> cat1Sold;

    cout << "Enter the number of Category 2 arrangements sold: ";
    cin >> cat2Sold;

    cout << "Enter the number of Category 3 arrangements sold: ";
    cin >> cat3Sold;

    // Calculations
    double totalFlowerCost = wholesaleCost * numberOfFlowers * 1000;
    double totalLaborCost = laborCost;
    double totalPackagingCost = packagingCost;

    // Gross profit and Net profit calculations
    double grossProfit = (cat1Sold * costCat1) + (cat2Sold * costCat2) + (cat3Sold * costCat3);
    double netProfit = grossProfit - totalLaborCost - totalPackagingCost;

    // Output results
    cout << "\n------ Cost and Profit Summary ------" << endl;
    cout << "The Flower: " << flowerType <<endl;
    cout << "Number of Flowers (in thousands): " << numberOfFlowers << endl;
    cout << "Category 1 Arrangements Sold: " << cat1Sold << endl;
    cout << "Category 2 Arrangements Sold: " << cat2Sold << endl;
    cout << "Category 3 Arrangements Sold: " << cat3Sold << endl;
    cout << "Cost of Flowers: $" << totalFlowerCost << endl;
    cout << "Labor Charges: $" << totalLaborCost << endl;
    cout << "Cost of Packaging: $" << totalPackagingCost << endl;
    cout << "Gross Profit: $" << grossProfit << endl;
    cout << "Net Profit: $" << netProfit << endl;

    return 0;
}
