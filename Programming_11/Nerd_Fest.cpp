// Created by Johnathan Kissee
// 10/14/2024
#include <iostream>
using namespace std;

int main() {
    int numNerds;
    cout << "Enter the nerds attending the festival: ";
    cin >> numNerds;

    // Transportation calc
    int numBusses = numNerds / 20;
    int remainingNerds = numNerds % 20;
    int numVans = remainingNerds / 6;
    remainingNerds = remainingNerds % 6;

    // Ticket calc
    int numGroupTickets = numNerds / 4;
    int indTickets = numNerds % 4;

    // Costs
    int busCost = numBusses * 450;
    int vanCost = numVans * 200;
    int groupTicketCost = numGroupTickets * 50;
    int indTicketCost = indTickets * 15;

    int totalTransportCost = busCost + vanCost;
    int totalTicketCost = groupTicketCost + indTicketCost;
    int totalCost = totalTransportCost + totalTicketCost;
    int costPerPerson = totalCost / numNerds;

    // Output results
    cout << "Minimum number of Busses required: " << numBusses << endl;
    cout << "Minimum number of Vans required: " << numVans << endl;
    cout << "Minimum number of Group tickets required: " << numGroupTickets << endl;
    cout << "Number of individual tickets required: " << indTickets << endl;
    cout << "Total cost of tickets: $" << totalTicketCost << endl;
    cout << "Total cost of transportation: $" << totalTransportCost << endl;
    cout << "Total cost per person: $" << costPerPerson << endl;

    return 0;
}
