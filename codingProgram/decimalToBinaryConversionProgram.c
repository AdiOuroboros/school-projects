/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Main of the sub-program for encoding a decimal number in
 *            binary
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

void decimalToBinaryConversionProgram()
{
    system("CLS");
    system("COLOR 5F");

    int numero;

    printf("\n\n\n\t\t\t PROGRAMMA CHE CODIFICA UN NUMERO INTERO IN BINARIO\n");

    printf("\n AVVERTENZE: Il numero deve essere compreso tra -32767 e +32767\n\t     per la codifica a 16 bit.\n");

    printf("\n Inserisci un numero intero: ");
    scanf("%d", &numero);

    convertToBinary(numero);

    menuExitFromSubProgram();
    commandSelectRepetitionProgramConversionDecimalToBinary();
}
