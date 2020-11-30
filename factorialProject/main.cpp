/************************************************************************************************
 *  Project: factorialProject
 *  Function: Calculation and printing of the factorial of a number
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <iostream>

#include "myFunctions.h"

using namespace std;

int main()
{
    int num;

    cout << "\n\t CALCOLO DEL FATTORIALE DI UN NUMERO\n\n";

    cout << " Inserisci un numero naturale: ";
    cin >> num;

    factorialFunction(num);

    cout << "\n\n";

    return 0;
}
