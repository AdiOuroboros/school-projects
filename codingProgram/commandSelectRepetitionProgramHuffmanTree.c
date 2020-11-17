/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Function that acquires one of the possible choices at the
 *            end of the huffmanTreeProgram subprogram
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

void commandSelectRepetitionProgramHuffmanTree()
{
    char selection;

    do{
        if (selection == 'y')
            huffmanTreeProgram();
        else if (selection == 'm')
            menuSelection();
        else if (selection == 'e')
            break;

        selection = getch();

    }while(selection != 'y' || selection != 'm');
}
