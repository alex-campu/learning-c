#include <stdio.h>

/* Elabora un programa en C que acepte el ingreso de cinco números,
 y que posteriormente imprima las direcciones de memoria de los valores correspondientes */

int main(void)
{
    int numbers[5]; // declare an array of 5 numbers
    int *pointers[5]; // declare an array of 5 pointers

    printf("Ingrese 5 números separados por espacios:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]); // get number from user and assign value to array
        pointers[i] = &numbers[i]; // assign pointer to pointers array
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Dirección de memoria del número %d es: %p\n", numbers[i], pointers[i]);
    }

    return 0;
}