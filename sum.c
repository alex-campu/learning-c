#include <stdio.h>

/*
 function that takes two numbers
 and performs some math operations
*/
void mathOperations(int num1, int num2)
{
    int sum = num1 + num2;
    int multiplication = num1 * num2;
    int substraction = num1 - num2;

    printf("Suma: %d\n", sum);
    printf("Multiplicación: %d\n", multiplication);
    printf("Resta: %d\n", multiplication);

    // check to avoid dividing by cero
    if (num2 != 0)
    {
        float division = (float)num1 / num2; // use float to get decimal value

        printf("División: %f\n", division);
    }
    else
    {
        printf("División: Error, no es posible dividir entre cero");
    }
}

int main()
{
    int firstNum, secondNum;

    // get user input
    printf("Ingrese un numero: ");
    scanf("%d", &firstNum);

    printf("Ingrese otro numero: ");
    scanf("%d", &secondNum);

    // call function to print math operations
    mathOperations(firstNum, secondNum);

    return 0;
}
