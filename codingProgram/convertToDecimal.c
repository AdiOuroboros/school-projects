/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Function that calculates the conversion of a binary number
 *            to decimal and returns the result to the
 *            binaryToDigimalConversionProgram sub-program
 *************************************************************************
 *  Author: Guido Marinelli
 *  Name: codingProgram
 *************************************************************************
 *
 *  Copyright 2020 by ITT Ettore Molinari
 *
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#include "myFunctions.h"

int convertToDecimal()
{
    const int BYTE = 15;

    char number;
    int binary[BYTE],  i;
    int count = 15, e = 14, power = 0;

    printf("\n Inserisci un numero binario: ");

    while(number != '\n' || count >= 0){
        number = getchar();
        if (number == '0' || number == '1'){
               binary[count--] = number - 48;
        }
    }

    printf ("\n");
    for (i = BYTE; i >= 0; i--){
        printf(" %d", binary[i]);
	}

    printf ("\n");
    for (i = BYTE - 1; i >= 0; i--){
            power += binary[i] * pow(2, e);
            e --;
        }

	return power;
}
