/************************************************************************************************
 *  Program: ProgramRandomNumbersInArange
 *  Function: Print random numbers in a range
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int MAX = 60;
const int MIN = 50;
const int NUM = 15;

int main()
{
    int number;
    srand(time(NULL));

    for (int i = 0; i < NUM; i++){
        number = MIN + (rand() % (MAX - MIN));
        cout << " " << number << endl;
    }

    cout << "\n\n";

    return 0;
}
