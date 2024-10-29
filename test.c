#include <stdio.h>

int main(int argc, char const *argv[])
{
    int firstInput;
    int secondInput;

    printf("Ingresa un numero: ");
    // read first input
    int first = scanf("%d", &firstInput);

    // if input is integer, first will be equal to 1
    if (first != 1)
    {
        printf("Por favor introduce un numero, no una letra!\n");
        // end program if input is not integer
        return 0;
    }

    printf("Ingresa otro numero: ");
    // read second input
    int second = scanf("%d", &secondInput);

    if (second != 1)
    {
        printf("Por favor introduce un numero, no una letra!\n");
        return 0;
    }

    if (firstInput == secondInput)
    {
        printf("Los numeros son iguales!\n");
    }
    else
    {
        printf("Los numeros son diferentes!\n");
    }

    return 0;
}
