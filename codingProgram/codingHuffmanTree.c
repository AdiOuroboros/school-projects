/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Function that calculates and displays the encoding of a 6
 *            character source alphabet
 *************************************************************************
 *  Author: Guido Marinelli
 *  Name: codingProgram
 *************************************************************************
 *
 *  Copyright 2020 by ITT Ettore Molinari
 *
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "myFunctions.h"

void codingHuffmanTree()
{
    const int  NUMBER_OF_CHARACTERS = 6;

    int T[NUMBER_OF_CHARACTERS];
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, nodo1 = 0, nodo2 = 0, nodo3 = 0, nodo4 = 0, nodeControl =0, count = 0;
    int character = 97;
    int i, temp, frequency;
    bool sentinel = true;

    // inserts values ​​into the array
    do{
        printf(" Inserisci un valore alla frequenza di '%c': ", character);
        scanf("%d", &frequency);
        if (frequency > 0){
            T[i] = frequency;
            character += 1;
            i++;
            count++;
        }
    }while(count < NUMBER_OF_CHARACTERS);

    // displays the source alphabet
    printf ("\n\n\t\t  Alfabeto sorgente:");

    for (i = 0; i < NUMBER_OF_CHARACTERS; i++){
        printf(" %d", T[i]);
    }

    // assign array values ​​to variables
    a = T[0];
    b = T[1];
    c = T[2];
    d = T[3];
    e = T[4];
    f = T[5];

    // descending sort with Bubble-sort
    while (sentinel ==true){
        sentinel=false;
        for (i = 0; i < NUMBER_OF_CHARACTERS - 1; i++){
            if (T[i] < T[i + 1]){
                temp = T[i];
                T[i] = T[i + 1];
                T[i + 1] = temp;
                sentinel = true;
            }
        }
	}

	// displays the sorted source alphabet
    printf ("\n\n\t Alfabeto sorgente ordinato:");

    for (i = 0; i < NUMBER_OF_CHARACTERS; i++){
        printf(" %d", T[i]);
    }
    // nodes value calculation
    nodo1 = T[4] + T[5];
    nodo2 = T[2] + T[3];
    nodo3 = nodo1 + nodo2 + T[1];
    nodo4 = nodo2 + nodo3;

    // calculation for the optimal codes
    nodeControl = T[1] - (T[2] + T[3]);

    // standard coding codes
    char codeU1[10] = {'0', '\0'};
    char codeV1[10] = {'1', ' ', '0', ' ', '0', '\0'};
    char codeW1[10] = {'1', ' ', '1', ' ', '0', '\0'};
    char codeX1[10] = {'1', ' ', '1', ' ', '1', '\0'};
    char codeY1[10] = {'1', ' ', '0', ' ', '1', ' ', '0', '\0'};
    char codeZ1[10] = {'1', ' ', '0', ' ', '1', ' ', '1', '\0'};

    char codeU2[10] = {'1', '\0'};
    char codeV2[10] = {'0', ' ', '0', ' ', '0','\0'};
    char codeW2[10] = {'0', ' ', '1', ' ', '0','\0'};
    char codeX2[10] = {'0', ' ', '1', ' ', '1','\0'};
    char codeY2[10] = {'0', ' ', '0', ' ', '1', ' ', '0','\0'};
    char codeZ2[10] = {'0', ' ', '0', ' ', '1', ' ', '1','\0'};

    // optimal codes when T[1] >= T[2] + T[3]
    char codeV3[10] = {'1', ' ', '1', '\0'};
    char codeW3[10] = {'1', ' ', '0', ' ', '0', ' ', '0', '\0'};
    char codeX3[10] = {'1', ' ', '0', ' ', '0', ' ', '1', '\0'};

    char codeV4[10] = {'0', ' ', '1', '\0'};
    char codeW4[10] = {'0', ' ', '0', ' ', '0', ' ', '0', '\0'};
    char codeX4[10] = {'0', ' ', '0', ' ', '0', ' ', '1', '\0'};

    // branch to view the standard encoding
    printf("\n\n");

    if (nodeControl < 0){
        if (T[0] > nodo4){
            if (a == T[0])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeU1);
            else if (a == T[1])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeV1);
            else if (a == T[2])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeW1);
            else if (a == T[3])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeX1);
            else if (a == T[4])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeY1);
            else if (a == T[5])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeZ1);

            if (b == T[0])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeU1);
            else if (b == T[1])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeV1);
            else if (b == T[2])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeW1);
            else if (b == T[3])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeX1);
            else if (b == T[4])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeY1);
            else if (b == T[5])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeZ1);

            if (c == T[0])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeU1);
            else if (c == T[1])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeV1);
            else if (c == T[2])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeW1);
            else if (c == T[3])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeX1);
            else if (c == T[4])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeY1);
            else if (c == T[5])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeZ1);

            if (d == T[0])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeU1);
            else if (d == T[1])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeV1);
            else if (d == T[2])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeW1);
            else if (d == T[3])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeX1);
            else if (d == T[4])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeY1);
            else if (d == T[5])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeZ1);

            if (e == T[0])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeU1);
            else if (e == T[1])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeV1);
            else if (e == T[2])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeW1);
            else if (e == T[3])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeX1);
            else if (e == T[4])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeY1);
            else if (e == T[5])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeZ1);

            if (f == T[0])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeU1);
            else if (f == T[1])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeV1);
            else if (f == T[2])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeW1);
            else if (f == T[3])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeX1);
            else if (f == T[4])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeY1);
            else if (f == T[5])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeZ1);
        }
        else{
            if (a == T[0])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeU2);
            else if (a == T[1])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeV2);
            else if (a == T[2])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeW2);
            else if (a == T[3])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeX2);
            else if (a == T[4])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeY2);
            else if (a == T[5])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeZ2);

            if (b == T[0])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeU2);
            else if (b == T[1])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeV2);
            else if (b == T[2])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeW2);
            else if (b == T[3])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeX2);
            else if (b == T[4])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeY2);
            else if (b == T[5])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeZ2);

            if (c == T[0])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeU2);
            else if (c == T[1])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeV2);
            else if (c == T[2])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeW2);
            else if (c == T[3])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeX2);
            else if (c == T[4])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeY2);
            else if (c == T[5])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeZ2);

            if (d == T[0])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeU2);
            else if (d == T[1])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeV2);
            else if (d == T[2])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeW2);
            else if (d == T[3])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeX2);
            else if (d == T[4])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeY2);
            else if (d == T[5])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeZ2);

            if (e == T[0])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeU2);
            else if (e == T[1])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeV2);
            else if (e == T[2])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeW2);
            else if (e == T[3])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeX2);
            else if (e == T[4])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeY2);
            else if (e == T[5])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeZ2);

            if (f == T[0])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeU2);
            else if (f == T[1])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeV2);
            else if (f == T[2])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeW2);
            else if (f == T[3])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeX2);
            else if (f == T[4])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeY2);
            else if (f == T[5])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeZ2);
        }
    }
    // branch to view the optimal encoding when T[1] >= T[2] + T[3]
    else{
        if (T[0] > nodo4){
            if (a == T[0])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeU1);
            else if (a == T[1])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeV3);
            else if (a == T[2])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeW3);
            else if (a == T[3])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeX3);
            else if (a == T[4])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeY1);
            else if (a == T[5])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeZ1);

            if (b == T[0])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeU1);
            else if (b == T[1])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeV3);
            else if (b == T[2])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeW3);
            else if (b == T[3])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeX3);
            else if (b == T[4])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeY1);
            else if (b == T[5])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeZ1);

            if (c == T[0])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeU1);
            else if (c == T[1])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeV3);
            else if (c == T[2])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeW3);
            else if (c == T[3])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeX3);
            else if (c == T[4])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeY1);
            else if (c == T[5])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeZ1);

            if (d == T[0])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeU1);
            else if (d == T[1])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeV3);
            else if (d == T[2])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeW3);
            else if (d == T[3])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeX3);
            else if (d == T[4])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeY1);
            else if (d == T[5])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeZ1);

            if (e == T[0])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeU1);
            else if (e == T[1])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeV3);
            else if (e == T[2])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeW3);
            else if (e == T[3])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeX3);
            else if (e == T[4])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeY1);
            else if (e == T[5])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeZ1);

            if (f == T[0])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeU1);
            else if (f == T[1])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeV3);
            else if (f == T[2])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeW3);
            else if (f == T[3])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeX3);
            else if (f == T[4])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeY1);
            else if (f == T[5])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeZ1);
        }
        else{
            if (a == T[0])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeU2);
            else if (a == T[1])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeV4);
            else if (a == T[2])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeW4);
            else if (a == T[3])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeX4);
            else if (a == T[4])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeY2);
            else if (a == T[5])
                printf("\n Codifica di 'a' con frequenza %2.d : %s", a, codeZ2);

            if (b == T[0])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeU2);
            else if (b == T[1])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeV4);
            else if (b == T[2])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeW4);
            else if (b == T[3])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeX4);
            else if (b == T[4])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeY2);
            else if (b == T[5])
                printf("\n Codifica di 'b' con frequenza %2.d : %s", b, codeZ2);

            if (c == T[0])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeU2);
            else if (c == T[1])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeV4);
            else if (c == T[2])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeW4);
            else if (c == T[3])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeX4);
            else if (c == T[4])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeY2);
            else if (c == T[5])
                printf("\n Codifica di 'c' con frequenza %2.d : %s", c, codeZ2);

            if (d == T[0])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeU2);
            else if (d == T[1])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeV4);
            else if (d == T[2])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeW4);
            else if (d == T[3])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeX4);
            else if (d == T[4])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeY2);
            else if (d == T[5])
                printf("\n Codifica di 'd' con frequenza %2.d : %s", d, codeZ2);

            if (e == T[0])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeU2);
            else if (e == T[1])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeV4);
            else if (e == T[2])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeW4);
            else if (e == T[3])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeX4);
            else if (e == T[4])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeY2);
            else if (e == T[5])
                printf("\n Codifica di 'e' con frequenza %2.d : %s", e, codeZ2);

            if (f == T[0])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeU2);
            else if (f == T[1])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeV4);
            else if (f == T[2])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeW4);
            else if (f == T[3])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeX4);
            else if (f == T[4])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeY2);
            else if (f == T[5])
                printf("\n Codifica di 'f' con frequenza %2.d : %s", f, codeZ2);
        }
    }
}
