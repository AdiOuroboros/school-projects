/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Print the possible options when a sub-program is finished
 *************************************************************************
 *  Author: Guido Marinelli
 *  Name: codingProgram
 *************************************************************************
 *
 *  Copyright 2020 by ITT Ettore Molinari
 *
 ************************************************************************/

#include <stdio.h>

#include "myFunctions.h"

#define U_LOWERCASE_GRAVE_ACCENT 151

void menuExitFromSubProgram()
{
    printf("\n\n\n Digita 'y' per continuare");
    printf("\n Digita 'm' per ritornare al men%c", U_LOWERCASE_GRAVE_ACCENT);
    printf("\n Digita 'e' se vuoi terminare il programma\n");
}
