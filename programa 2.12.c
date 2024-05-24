#include <stdio.h>
#include <math.h>

int main()
{
    int T, P, N; // Declara las variables enteras T, P y N

    // Pide al usuario que ingrese los valores de T, P y N
    printf("Ingrese los valores de T, P y N: ");

    scanf("%d %d %d", &T, &P, &N); // Lee tres valores enteros del usuario y los asigna a T, P y N
    if (P != 0)                    // Verifica si P es diferente de cero para evitar división por cero
    {
        if(pow(T / P, N) == (pow(T, N) / pow(P, N))) // Calcula y verifica si (T / P)^N es igual a T^N / P^N
        {
            printf("\nSe comprueba la igualdad");    // Si la condición se cumple, imprime que se comprueba la igualdad
        }else
        {
            printf("\nNo se comprueba la igualdad"); // Si la condición no se cumple, imprime que no se comprueba la igualdad
        }
    }else
    {
        // Si P es igual a cero, imprime un mensaje indicando que P debe ser diferente de cero
        printf("\nP tiene que ser diferente de cero");
    }
    return 0;
}
