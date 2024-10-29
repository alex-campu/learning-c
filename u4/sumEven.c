#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  Escribe un programa en C que determine la suma de los números de posición par de la cifra 1257851.

int main(int argc, char const *argv[])
{
    // cifra a analizar
    char input[] = "1257851";

    int sum = 0;
    int i = 0;
    while (strlen(input) > i)
    {
        // si la posicion (i + 1, pues i es base 0) es divisible, entonces es par
        if ((i + 1) % 2 == 0)
        {
            // para convertir de char a int, se resta '0'
            //  '0' = ASCII code 48, '1' = 49, etc
            int number = input[i] - '0';
            printf("%d\n", number);
            // acumular la suma anterior, mas el numero actual
            sum = sum + number;
        }
        i++;
    }
    printf("Suma de números en posición par: %d\n", sum);

    return 0;
}
