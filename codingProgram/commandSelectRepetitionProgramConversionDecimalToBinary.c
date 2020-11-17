/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Function that acquires one of the possible choices at the
 *            end of the decimalToBinaryConversionProgram subprogram
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

void commandSelectRepetitionProgramConversionDecimalToBinary()
{
    char selection;

    do{
        if (selection == 'y')
            decimalToBinaryConversionProgram();
        else if (selection == 'm')
            menuSelection();
        else if (selection == 'e')
            break;

        selection = getch();

    }while(selection != 'y' || selection != 'm');
}
