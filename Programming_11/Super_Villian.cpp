#include <iostream>
using namespace std;

int main() {
    string coolKidsLaughed;

    // Prompt input
    cout << "Did the cool kids laugh? (Yes/No): ";
    cin >> coolKidsLaughed;

    // Decision-making 
    if (coolKidsLaughed == "Yes") {
        cout << "DOOMSDAY DEVICE RELEASED!!! THIS IS THE END FOR YOU JOCKS!" << endl;
    } 
    else if (coolKidsLaughed == "No") {
        cout << "It's nice to see yall again. Say, Jack, it might be because of my new glasses but I'm not sure you've been reacting well to the Bigmacs." << endl;
    } 

    return 0;
}
