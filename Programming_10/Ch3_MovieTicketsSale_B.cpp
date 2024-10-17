
/*
Author: D.S. Malik

Program: Movie Tickets Sale
This program determines the money to be donated to a
charity. It prompts the user to input the movie name, adult
ticket price, child ticket price, number of adult tickets sold,
number of child tickets sold,
and percentage of the gross amount to be donated to the charity.
 
 */
  
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
 
using namespace std;
  
int main()
{
        //Step 1
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int noOfAdultTicketsSold;
    int noOfChildTicketsSold;
    double percentDonation;
    double grossAmount;
    double amountDonated;
    double netSaleAmount;

    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    inFile.open("movie.txt");                         //Step 2
    outFile.open("movieDonation.txt");
    
    
    cout << fixed << showpoint << setprecision(2);  //two decimal place out, displaying money

    //cout << "Enter the movie name: ";               //Step 3
    getline(inFile, movieName);                        //Step 4
   // cout << endl;

    //cout << "Enter the price of an adult ticket: "; //Step 5
    inFile >> adultTicketPrice;                        //Step 6
    //cout << endl;

    //cout << "Enter the price of a child ticket: ";  //Step 7
    inFile >> childTicketPrice;                        //Step 8
   // cout << endl;

    //cout << "Enter the number of adult tickets sold: "; //Step 9
    inFile >> noOfAdultTicketsSold;                    //Step 10
    //cout << endl;

    //cout << "Enter the number of child tickets sold: "; //Step 11
    inFile >> noOfChildTicketsSold;                    //Step 12
    //cout << endl;
 
    //cout << "Enter the percentage of donation: ";   //Step 13
    inFile >> percentDonation;                         //Step 14
    //cout << endl << endl;
 
                   //Step 15
    grossAmount = (adultTicketPrice * noOfAdultTicketsSold) +
                  (childTicketPrice * noOfChildTicketsSold);

                   //Step 16
    amountDonated = (grossAmount * percentDonation) / 100.0;

    netSaleAmount = grossAmount - amountDonated;    //Step 17

           //Step 18: Output results
    outFile << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << "-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    outFile << setfill('.') << left << setw(35) << "Movie Name: " << right << " " << movieName << endl;
    outFile << left << setw(35) << "Number of Tickets Sold: " << setfill(' ') << right << setw(10) << (noOfAdultTicketsSold + noOfChildTicketsSold) << endl;
    outFile << setfill('.') << left << setw(35) << "Gross Amount: " << setfill(' ') << right << " $" << setw(8) << grossAmount << endl;
    outFile << setfill('.') << left << setw(35) << "Percentage of Gross Amount Donated: " << setfill(' ') << right << setw(9) << percentDonation << '%' << endl;
    outFile << setfill('.') << left << setw(35) << "Amount Donated: " << setfill(' ') << right << " $" << setw(8) << amountDonated << endl;
    outFile << setfill('.') << left << setw(35) << "Net Sale: " << setfill(' ') << right << " $" << setw(8) << netSaleAmount << endl;
    
    
    inFile.close();                                 
    outFile.close();                               

    return 0;
}
