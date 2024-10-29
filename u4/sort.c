#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Elabora un programa que ordene 20 números almacenados en un arreglo.

/* he decidido elegir el metodo de ordenamiento de burbuja, el cual compara un elemento
  del arreglo con el siguiente, si este es menor, los intercambia de lugar (swap).
  Este proceso se repite hasta que sea posible hacer un ciclo completo en todo
  el arreglo sin que sea necesario intercambiar ningun número
  input: 1 5 2 8 7 3 500 3 6 1 5 4 3 2 8 8 8 4 2 10
  output: 1 1 2 2 2 3 3 3 4 4 5 5 6 7 8 8 8 8 10 500
  */

int main(int argc, char const *argv[])
{

    // int numbers[20] = {900, 9, 20, 2, 5, 2, 400, 1, 3, 19, 15, 1, 0, 8, 8, 300, 8, 1, 9, 9};

    int numbers[20];
    printf("Ingrese 20 números separados por espacios:\n");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &numbers[i]);
    }

    bool isSwapped = true;

    // obtener la longitud del arreglo
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // itera por cada elemento del arreglo
    for (int i = 0; i < length - 1; i++)
    {
        /* cuando isSwapped sea 'false' significa que en la iteracion anterior no se intercambió ningun numero,
        es decir que el arreglo está totalmente ordenado por lo que se termina la ejecución del programa */
        if (!isSwapped)
        {
            printf("Arreglo ordenado! Resultado:\n");
            for (size_t k = 0; k < length; k++)
            {
                printf("%d ", numbers[k]);
            }
            printf("\n");
            return 0;
        }

        /*  antes de cada iteracion isSwapped es false, pero cambia a true cuando algun
        numero sea intercambiado */
        isSwapped = false;
        // itera por cada elemento del arreglo
        for (int j = 0; j < length - 1; j++)
        {
           //  1 5 2 8 7 3 500 3
            if (numbers[j] > numbers[j + 1])
            {
                // swap:
                int original = numbers[j]; // 5 guardar valor original, pues numbers[j] será modificado
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = original; // 5
                isSwapped = true;
            }
        }
    }

    return 0;
}
