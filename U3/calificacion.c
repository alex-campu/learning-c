#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;

    printf("Ingresa tu calificacion: ");
    // read score input
    scanf("%d", &score);

    // if input is bigger than 10, throw error and ask again for the score
    if (score > 10)
    {
        printf("Error, porfavor ingresa un número ente 0 y 10: ");
        scanf("%d", &score);
    }

    /* map score to string representation:
     * lower than 6->NA
     * 6 to lower than 7 -> S
     * 7 to lower than 8 -> B
     * 8 to lower than 9 -> D
     * bigger than 9 -> E
     */
    if (score < 6)
    {
        printf("NA\n");
    }
    else if (score >= 6 && score < 7)
    {
        printf("S\n");
    }
    else if (score >= 7 && score < 8)
    {
        printf("B\n");
    }
    else if (score >= 8 && score < 9)
    {
        printf("D\n");
    }
    if (score >= 9)
    {
        printf("E\n");
    }

    return 0;
}
