/*************************************************************************
 *  Project: Codifica dell'informazione
 *  Function: Main of the sub-program for coding an alphabet arise of
 *            6 characters with the Huffman tree
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

void huffmanTreeProgram()
{
    system("CLS");
    system("COLOR 2E");

    printf("\n\n\n\t\t\t CODIFICA CON L'ALBERO DI HUFFMAN\n\n\n");

    codingHuffmanTree();

    menuExitFromSubProgram();
    commandSelectRepetitionProgramHuffmanTree();
}
