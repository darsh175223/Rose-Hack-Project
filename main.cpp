#include "binary.h"


#include <iostream>


using namespace std;




int main() {


    // Menu
    while (true)
    {
        // Print menu options
        PrintMenu();


        // The user inputs commands to navigate the menu
        string command;
        if (!(cin >> command) || command == "q") break; // If input fails or user chooses to quit


        if (command == "1")
        {
            // Get binary input from the user
            string binaryInput = getBinaryInput();


            // Convert binary to decimal and display the result
            int decimalResult = binaryToDecimal(binaryInput);
            cout << "Decimal equivalent: " << decimalResult << "\n" << endl;
        }
        else if (command == "2")
        {
            // Get decimal input from the user
            int decimalInput;
            cout << "Enter a decimal number: ";
            cin >> decimalInput;


            // Convert decimal to binary and display the result
            string binaryResult = decimalToBinary(decimalInput);
            cout << "Binary equivalent: " << binaryResult << "\n" << endl;
        }
        else if(command =="3")  //binary to hex
        {
            break;
        }
        else if(command =="4")  //hex to binary
        {
            string hex;
            cout << "Enter a hex number: ";
            cin >> hex;




            string binaryResult = hexToBinary(hex);
            cout << "Binary equivalent: " << binaryResult << endl;
        }
        else if(command == "q")
        {
            break;
        }
    }


    return 0;
}




