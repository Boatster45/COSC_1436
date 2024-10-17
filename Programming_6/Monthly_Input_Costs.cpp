// Programing 6
// Created by Johnathan Kissee
// 09/23/2024

#include <iostream>
using namespace std;

int main() {
    double hobbyCost, clothingCost, entertainmentCost, taekwondoCost, gymCost;
    
    // Prompt user input
    cout << "Please enter your monthly expenses for the following categories:" << endl;
    
    // All 5 Categories with input
    cout << "1. Hobby: $";
    cin >> hobbyCost;

    cout << "2. Clothing: $";
    cin >> clothingCost;

    cout << "3. Entertainment: $";
    cin >> entertainmentCost;

    cout << "4. Taekwondo: $";
    cin >> taekwondoCost;

    cout << "5. Gym: $";
    cin >> gymCost;

    // Calculate Total Monthly Cost
    double totalMonthlyCost = hobbyCost + clothingCost + entertainmentCost + taekwondoCost + gymCost;

    // Calculate Total Annual Cost
    double totalAnnualCost = totalMonthlyCost * 12;

    // Output Results
    cout << "\nThe total monthly cost is: $" << totalMonthlyCost << endl;
    cout << "The total annual cost is: $" << totalAnnualCost << endl;

    return 0;
}
