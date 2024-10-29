#include <stdio.h>

typedef struct
{
    char DNI[20], nombreAlumno[100]; 
    float notaT, notaP;              
} TAlumno;

const int NUM_ALUMNOS = 50;
typedef TAlumno TList[NUM_ALUMNOS];

int main(int argc, char const *argv[])
{

    TList alumnos = {
        {"12345678A", "Alex", 4.0, 10.0},
        {"87654321B", "Maria", 3.5, 4.5},
        {"23456789C", "John", 6.0, 3.0},
        {"34567890D", "Emily", 7.5, 3.0},
        {"45678901E", "David", 5.0, 3.5}
    };

    // leer alumnos:
    for (int i = 0; i < NUM_ALUMNOS; i++)
    {
        // si dni está vacío, detener loop
        if (alumnos[i].DNI[0] == '\0') break; 
        printf("Alumno %s llamado %s. Nota en teoría: %f, Nota en práctica: %f\n", 
        alumnos[i].DNI, 
        alumnos[i].nombreAlumno, 
        alumnos[i].notaT, 
        alumnos[i].notaP);
    }

    // imprimir a consola si alumno es aprobado
    for (int i = 0; i < NUM_ALUMNOS; i++)
    {
        if (alumnos[i].DNI[0] == '\0')
        {
            break;
        }
        printf("%s - %s: ", alumnos[i].DNI, alumnos[i].nombreAlumno);
        float note = (0.6 * alumnos[i].notaT) + (0.4 * alumnos[i].notaP);
        int calificacionAprovatoria = 5;
        if (note < calificacionAprovatoria){
            printf("Reprobado 😿\n");
        } else {
            printf("Aprobado 😺\n");
        }
    }
    return 0;
}
