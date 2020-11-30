/************************************************************************************************
 *  Project: factorialProject
 *  Function: Function for calculating and printing the factorial of a number
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <iostream>
#include <cstdlib>

#include "myFunctions.h"

using namespace std;

void factorialFunction(int number)
{
    int factorial = number;

    if (number > 0)
        for (int i = number - 1 ; i > 0; i--){
        factorial *= i;
    }
    else if (number == 0)
        factorial = 1;
    else
        exit(1);

    cout <<"\n  " << number <<"! = " << factorial;
}
