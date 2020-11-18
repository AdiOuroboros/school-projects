/*************************************************************************
 *  Program: printsOddOrEvenNumbersFromAnArray
 *  Function: Print odd or even numbers entered into an array
 *************************************************************************
 *  Author: Guido Marinelli
 *************************************************************************
 *
 *  Copyright 2020 by ITT Ettore Molinari
 *
 ************************************************************************/

#include <iostream>
using namespace std;

const int ARRAY_EXTENSION_MAX = 100;

// Prototypes of the functions
int chooseArrayExtension();
void calculatesAndPrintsEvenAndOddNumbers(int vectorNumbersEntered[], int lenght);

int main()
{
    int vectorNumbers[ARRAY_EXTENSION_MAX];
    int dimension;

    cout << "\n\n\t STAMPA NUMERI INTERI PARI O DISPARI INSERITI IN UN ARRAY\n\t DI LUNGHEZZA INSERITA DALL'UTENTE MA NON SUPERIORE A 100\n\n\n";

    dimension = chooseArrayExtension();
    calculatesAndPrintsEvenAndOddNumbers(vectorNumbers, dimension);


    cout << "\n\n";

    return 0;
}

// Extension of the  array
int chooseArrayExtension()
{
    int extension;

    do{
        cout << "\n Inserisci la lunghezza dell'array: ";
        cin >> extension;
    }while (extension <1 || extension > ARRAY_EXTENSION_MAX);

    return extension;
}

// Calculates and prints even and odd numbers
void calculatesAndPrintsEvenAndOddNumbers(int vectorNumbersEntered[], int lenght)
{
    int vectorEvenNumbers[ARRAY_EXTENSION_MAX];
    int vectorOddNumbers[ARRAY_EXTENSION_MAX];
    int evenNumberCounter = 0, oddNumberCounter = 0;

    cout << "\n";

    for (int i = 0; i <= lenght - 1; i++){
        cout << " Inserisci l'elementi di posto " << i + 1 << " : ";
        cin >> vectorNumbersEntered[i];
        if (vectorNumbersEntered[i] % 2 == 0){
            vectorEvenNumbers[evenNumberCounter] = vectorNumbersEntered[i];
            evenNumberCounter++;
        }
        else{
            vectorOddNumbers[oddNumberCounter] = vectorNumbersEntered[i];
            oddNumberCounter++;
        }
    }

    cout << " \n\n Il numero dei numeri pari inseriti: " <<evenNumberCounter << endl;
    cout << " Il numero dei numeri dispari inseriti: " << oddNumberCounter << endl;

    cout << "\n\n I numeri interi inseriti sono : "<< endl;
    for (int i = 0; i <= lenght - 1; i++){
        cout << " " << vectorNumbersEntered[i] << " ";
    }

    cout << "\n\n I numeri pari inseriti sono : " << endl;
    for (int y = 0; y <= evenNumberCounter - 1; y++){
        cout << " " << vectorEvenNumbers[y] << " ";
    }

    cout << "\n\n I numeri dispari inseriti sono : " << endl;
    for (int z = 0; z <= oddNumberCounter - 1; z++){
        cout << " " << vectorOddNumbers[z] << " ";
    }
}
