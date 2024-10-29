#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char username[60];

    printf("Ingresa tu nombre de usuario: ");
    // read input
    scanf("%s", username);

    char str[60];
    // assign username value to str
    strcpy(str, username);

    // concatenate username + text
    strcat(str, ", porfavor introduce un caracter: ");
    printf("%s", str);

    char digit;
    // get digit
    scanf(" %c", &digit);

    // isdigit returns 1 for numbers
    if (isdigit(digit))
        printf("El caracter es un número!\n");
    else
        printf("El caracter es una letra!\n");

    return 0;
}
