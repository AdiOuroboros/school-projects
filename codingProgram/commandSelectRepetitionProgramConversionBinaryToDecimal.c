/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Function that acquires one of the possible choices at the
 *            end of the binaryToDecimalConversionProgram sub-program
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

void commandSelectRepetitionProgramConversionBinaryToDecimal()
{
    char selection;

    do{
        if (selection == 'y')
            binaryToDecimalConversionProgram();
        else if (selection == 'm')
            menuSelection();
        else if (selection == 'e')
            break;

        selection = getch();

    }while(selection != 'y' || selection != 'm');
}
