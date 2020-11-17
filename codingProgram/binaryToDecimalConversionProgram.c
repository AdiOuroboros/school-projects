/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Main of the sub-program for encoding a binary number in
 *            decimal
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

#define E_LOWERCASE_GRAVE_ACCENT 138

void binaryToDecimalConversionProgram()
{
    system("CLS");
    system("COLOR BF");

    printf("\n\n\n\t\t\t PROGRAMMA CHE CODIFICA UN NUMERO BINARIO IN UN NUMERO INTERO\n");

    printf("\n AVVERTENZE: puoi inserire solo 16 caratteri per via della memorizzazione a 16 bit.\n");

    printf("\n Il numero in base 10 %c %d", E_LOWERCASE_GRAVE_ACCENT, convertToDecimal());

    menuExitFromSubProgram();
    commandSelectRepetitionProgramConversionBinaryToDecimal();
}
