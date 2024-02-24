#include <stdio.h>

/* Prototipo de funci�n */
int cubo(int); /* El par�metro es de tipo entero. */

/* Funci�n principal */
void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de %d es: %d", I, cubo(I)); /* Llamada a la funci�n cubo. El paso del par�metro es por valor. */
}

/* Definici�n de la funci�n cubo */
int cubo(int K) /* K es un par�metro por valor de tipo entero. */
{
    return (K * K * K);
}
