/* ****************************************************************
 * @author: <MARK GERONE F. GROSPE>
 * @app name: <User's Daily budget>
 * @app desc: <A program that accepts user's daily budget and display the the product of of itself>
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

    int daily_Budget;
    cout << "Please enter your Daily Budget:" ;
    cin >> daily_Budget;
    cout << endl << "Your Daily budget is: " << daily_Budget << endl;
    cout << "The product of your daily budget and itself is: " << daily_Budget * daily_Budget << endl;

    //include pause the program automatically exits after user input using VS Code  
    system("pause");

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
