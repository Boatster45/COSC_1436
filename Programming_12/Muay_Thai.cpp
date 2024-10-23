//Muay_Thai.cpp
//Created by Johnathan Kissee
//10/21/24
#include <iostream>

using namespace std;

int main() {
    // Variable for weight
    double Kickboxer_weight;

    // Intro Messgae
    cout << "||| Kickboxing Weight Class Identifier |||";
    
    // Prompt for input
    cout << "\nEnter the weight of the Muay Thai kickboxer (in pounds): ";
    cin >> Kickboxer_weight;
    
    // Output weight class
    cout << "The kickboxer belongs to the ";
    
    // Logic with switch case.
    switch (int(Kickboxer_weight)) {
        case 0 ... 112:
            cout << "Flyweight class." << endl;
            break;
        case 113 ... 115:
            cout << "Super flyweight class." << endl;
            break;
        case 116 ... 118:
            cout << "Bantamweight class." << endl;
            break;
        case 119 ... 122:
            cout << "Super bantamweight class." << endl;
            break;
        case 123 ... 126:
            cout << "Featherweight class." << endl;
            break;
        case 127 ... 130:
            cout << "Super featherweight class." << endl;
            break;
        case 131 ... 135:
            cout << "Lightweight class." << endl;
            break;
        case 136 ... 140:
            cout << "Super lightweight class." << endl;
            break;
        case 141 ... 147:
            cout << "Welterweight class." << endl;
            break;
        case 148 ... 154:
            cout << "Super welterweight class." << endl;
            break;
        case 155 ... 160:
            cout << "Middleweight class." << endl;
            break;
        case 161 ... 167:
            cout << "Super middleweight class." << endl;
            break;
        case 168 ... 175:
            cout << "Light heavyweight class." << endl;
            break;
        case 176 ... 183:
            cout << "Super light heavyweight class." << endl;
            break;
        case 184 ... 190:
            cout << "Cruiserweight class." << endl;
            break;
        case 191 ... 220:
            cout << "Heavyweight class." << endl;
            break;
        default:
            cout << "Super heavyweight class." << endl;
            break;
    }

    return 0;
}
