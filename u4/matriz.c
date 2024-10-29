#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Elabora un programa en C que determine si el contenido de dos matrices de 2x2, son iguales.

int main(int argc, char const *argv[])
{
    int matrix1[10][10] = {{1, 1, 9},
                           {4, 5}};

    int matrix2[10][10] = {{1, 1, 7},
                           {4, 5}};

    // length = cantidad de renglones en la matriz
    int length = sizeof(matrix1) / sizeof(matrix1[0]);

    int i = 0;
    bool areEqual = true;
    while (length > i)
    {
        // subLength = cantidad de columnas en la matriz
        int subLength = sizeof(matrix1[i]) / sizeof(matrix1[i][0]);

        int j = 0;
        while (subLength > j)
        {
            // comparar si el elemento en matriz 1 es igual en matriz 2
            if (matrix1[i][j] != matrix2[i][j])
            {
                areEqual = false;
                printf("Posición '%d, %d' difiere entre las matrices\n", i + 1, j + 1);
            }
            j++;
        }

        i++;
    }

    if (areEqual)
    {

        printf("Las matrices son iguales\n");
    }

    return 0;
}
