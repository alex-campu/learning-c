#include <stdio.h>
#include <stdbool.h>

const int max=20;

typedef int Telements[max];
typedef struct TList
{
    int size;
    Telements e;
} tList;

int MINIMUM_VALUE=9;

int main(int argc, char const *argv[])
{
    tList list;
    list.size=5;
    int values[] = {9, 4, 10, 20, 1};
    for (int i = 0; i < list.size; i++){
        list.e[i] = values[i];
    }

    do {
        printf("Cuantos elementos tiene la lista? (max %d): ", max);
        printf("%d\n", list.size);

    } while (list.size<0 || list.size > max);
    
    // leer lista:
    int count=0;
    for (int i = 0; i < list.size; i++)
    {
         printf("valor %d:  %d\n", i + 1, list.e[i]);
         if (list.e[i] > MINIMUM_VALUE){
            count++;
         }
    }

    printf("Hay %d valores mayores que %d\n", count, MINIMUM_VALUE);

    return 0;
}



