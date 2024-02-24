#include <stdio.h>

/* Factorial.
El programa calcula el factorial de un n�mero entero.
FAC, I, NUM: variables de tipo entero. */
void main(void)
{
    int I, NUM;
    long FAC;
    printf(Ingrese el n�mero: );
    scanf(%d, &NUM);

    if (NUM >= 0)
    {
        FAC = 1;
        for (I = 1; I <= NUM; I++)
        {
            FAC *= I; // Se calcula el factorial multiplicando por cada n�mero desde 1 hasta NUM
        }
        printf(El factorial de %d es: %ld, NUM, FAC);
    }
    else
    {
        printf(El n�mero debe ser no negativo para calcular su factorial.);
    }
}
