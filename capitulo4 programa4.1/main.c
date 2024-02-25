#include <stdio.h>

/* Prototipo de funci�n */
int cubo(void);

/* Variable global */
int I;

/* Funci�n principal */
void main(void) {
    int CUB;
    for (I = 1; I <= 10; I++) {
        CUB = cubo(); /* Llamada a la funci�n cubo */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

/* Definici�n de la funci�n cubo */
int cubo(void) {
    /* La funci�n calcula el cubo de la variable global I */
    return (I * I * I);
}
