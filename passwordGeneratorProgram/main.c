/************************************************************************************************
 *  Project: passwordGeneratorProgram
 *  Function: Generate a random password
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#include "myFunctions.h"

int main()
{
    printf("\n\t\t\t PROGRAMMA CHE GENERA PASSWORD\n\n");

    char selection;

    printf("\n Digita 'y' se vuoi generare una password o 'n' per terminare il programma: ");

    do{
        selection = getchar();

        if (selection == 'y' || selection == 'Y')
            passwordGeneratorFunction();
        else if (selection == 'n' || selection == 'N')
            break;

    }while (selection != 'y' || selection != 'Y');

    printf("\n\n");

    return 0;
}
