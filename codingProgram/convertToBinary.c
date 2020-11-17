/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Function that calculates and prints the encoding of a
 *            decimal number in binary
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

void convertToBinary(int number)
{
    const int BYTE = 15;

    int binary[BYTE], i;

    if (number >= 0){
        binary[0] = 0;
        do {
                for (i = BYTE ; i > 0 ; i--){
                    binary[i] = i;
                    binary[i] = number % 2;
                    number /=2;
                }
        }while(number > 0);
    }
    else{
        binary[0] = 1;
    }

    printf ("\n");
    for (i = 0; i <= BYTE; i++){
        printf(" %d", binary[i]);
	}
}
