/************************************************************************************************
 *  Project: passwordGeneratorProgram
 *  Function: Function that prints a randomly generated password
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "myFunctions.h"

void passwordGeneratorFunction()
{
    const int lenghtPassword = 20;
    const int codeASCII = 127; // Maximum integer value representing a character in the Standard ASCII table
    int password[lenghtPassword];
    int numberCode;
    int i = 0;

    srand(time(NULL));

    while (i < lenghtPassword){
        numberCode = (rand() % codeASCII); // Function that generates random numbers in the given range (0 to 127)
        if ((numberCode >= 65 && numberCode <= 90) || (numberCode >= 97 && numberCode <= 122)   // Instructions for selecting numbers
            || (numberCode >= 48 && numberCode <= 57)                                           // that correspond to the basic rules
            || numberCode == 33 || numberCode == 63 || numberCode == 35 || numberCode == 42){   // for generating a password
            password[i] = numberCode;
            i++;
        }
    }

    // Assign the integer 45 to the "password []" array with index 6 and 13
    password[6] = 45;
    password[13] = 45;

    printf("\n\t\t\t");
    for (i = 0; i < lenghtPassword; i++)
        printf("%c", password[i]);  // Print the array by converting integers to characters

    printf("\n\n\n Digita 'y' se vuoi generare una password o 'n' per terminare il programma: ");
}
