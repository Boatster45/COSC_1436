//Bouncy_House.cpp
//Created by Johnathan Kissee
//10/23/24
#include <iostream>

using namespace std;

int main() {
    // Variable for weight
    double PersonA_weight,PersonB_weight, PersonA_height;
    const int k = 3.0;

    // Intro Messgae
    cout << "||| Bouncy House Bounce Height |||";
      
    cout << "\n Using the equation hA = k * wB/wA";

    for (int PersonB_weight = 10; PersonB_weight <= 100; PersonB_weight += 10) {
        double PersonA_height = k * (PersonB_weight / PersonA_weight);

    }


    return 0;
}
