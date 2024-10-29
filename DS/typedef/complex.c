#include <stdio.h>
#include <math.h>

const int max = 10;

typedef struct TComplex
{
    double real, imag;
} tComplex;

typedef tComplex TComplexList[max];

double absoluteValueMean(TComplexList x, int size)
{
    printf("el tamaño de la lista es de %d\n", size);
    double sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += sqrt(pow(x[i].real, 2)) + sqrt(pow(x[i].imag, 2));
    }
    
    return sum / size;
}

// array of structs
int main(int argc, char const *argv[])
{
   

    TComplexList tList;
    tList[0].real=3;
    tList[0].imag=4;

    TComplexList complexNumbers = {
        {3.0, 4.0},   
        {1.0, 1.0},  
        {0.0, 2.0},   
        {-1.0, -1.0}, 
        {2.0, 0.0}    
    };

    double result = absoluteValueMean(complexNumbers, sizeof(complexNumbers) / sizeof(complexNumbers[0]));

    printf("La media de los valores absolutos de la lista es: %f\n", result);
    return 0;
}
