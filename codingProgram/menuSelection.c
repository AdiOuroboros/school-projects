/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Print the possible options and acquire the choice of the
 *            main menu
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

char menuSelection()
{
    system("CLS");
    system("COLOR F0");

    char selection;

    printf("\n\t\t\t PROGRAMMA DI CODIFICA DI INFORMAZIONI\n\n\n");
        printf("\n\t\tDigita l'indice del programma che vuoi eseguire\n\n");
        printf("\n\t 1) CONVERSIONE BINARIO DECIMALE");
        printf("\n\t 2) CONVERSIONE DECIMALE BINARIO");
        printf("\n\t 3) CODIFICA CON L'ALBERO DI HUFFMAN");
        printf("\n\t e) Esci\n");
        printf("\n\t Effetua una scelta: ");

    do{
        if (selection == '1')
            binaryToDecimalConversionProgram();
        else if (selection == '2')
            decimalToBinaryConversionProgram();
        else if (selection == '3')
            huffmanTreeProgram();
        else if (selection == 'e')
            break;
        selection = getch();

    }while(selection != '1' || selection != '2');

    return selection;
}
