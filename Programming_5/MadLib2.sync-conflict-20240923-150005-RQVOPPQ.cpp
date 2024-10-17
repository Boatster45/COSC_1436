//
//  MadLib.cpp
//  
//
//  Created by Johnathan Kissee on 9/14/24. 

#include <iostream>
using namespace std;

int main()
{    
    // Added NOUN, VERB, PLURAL, etc... to suit the needs for the MadLib
    string ADJECTIVE1 = "thick";
    string ADJECTIVE2 = "ancient";
    string TYPE_OF_BIRD = "seagull";
    string ROOM_IN_A_HOUSE = "kitchen";
    string VERB1 = "ran";
    string VERB2 = "cook";
    string VERB3 = "living";
    string VERB4 = "fighting";
    string RELATIVE = "Bob";
    string NOUN1 = "drink";
    string NOUN2 = "Pepsi";
    string NOUN3 = "floor";
    string PLURAL = "eyeballs";
    string PLURAL_NOUN = "donkeys";

    //Cout for blank spacing
    cout << endl;
    cout << endl;
    cout << endl;

    // MadLib sentence with \n mixed in to add the effect of different lines to confirm to the madlib.
    cout << "It was a " << ADJECTIVE1 << ", cold November day. I \nwoke up to the " << ADJECTIVE2 << " smell of " << TYPE_OF_BIRD << endl;
    cout << "roasting in the " <<ROOM_IN_A_HOUSE<< ". I \nran down the stairs to see if I could \nhelp " << VERB2 << " the dinner. My mom said, " << endl;
    cout << "'see if " << RELATIVE << " needs a fresh " << NOUN1 << ".'" " So I \ncarried a tray of glasses full of " << NOUN2 << " into\nthe "<< VERB3<< " room." " When I got there, I" << endl; 
    cout << "couldn't believe my "<< PLURAL << "! There were \n" << PLURAL_NOUN << " " << VERB4 << " on the " << NOUN3 << "!" << endl;
    
    //Cout for blank spacing
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}
