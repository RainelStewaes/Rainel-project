#include <stdio.h>

/* Prototipo de funci�n */
void f1(void);

/* Variable global */
int K = 5;

/* Funci�n principal */
void main(void) {
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}

/* Definici�n de la funci�n f1 */
void f1(void) {
    /* Variable local */
    int K = 2;

    /* Operaciones con la variable local K */
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);

    /* Operaciones con la variable global K */
    ::K = ::K + K; /* Actualizaci�n de la variable global */
    printf("\nEl valor de la variable global es: %d", K);
}
