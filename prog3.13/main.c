#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los primeros 50 n�meros de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */
void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;
    printf(\t %d \t %d, PRI, SEG); // Impresi�n de los dos primeros n�meros

    for (I = 3; I <= 50; I++) // Comienza desde el tercer n�mero de Fibonacci
    {
        SIG = PRI + SEG;
        printf(\t %d, SIG);
        PRI = SEG;
        SEG = SIG;
    }
}
