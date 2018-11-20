/* ****************************************************************
 * @author: <MARK GERONE F. GROSPE>
 * @app name: <Accept Spaces>
 * @app desc: <A program that supports spaces at user's input>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    string name, password, address;

    cout << "Please enter the following:" << endl;
    cout << "Your name: ";
    getline (cin, name);
    cout << "Password: ";
    getline (cin, password);
    cout << "Address: ";
    getline (cin, address);
    cout <<"\nHi, I am " << name << "." << " I live at " << address <<"." << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
