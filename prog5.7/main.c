#include <stdio.h>

/* Prototipos de funciones */
void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

int main(void) {
    int TAM, ARRE[100];

    /* Se solicita el tama�o del arreglo asegur�ndose de que est� dentro de los l�mites */
    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(ARRE, TAM);
    Elimina(ARRE, &TAM);  /* El tama�o del arreglo se pasa por referencia */
    Imprime(ARRE, TAM);

    return 0;
}

/* Funci�n para leer un arreglo unidimensional de enteros *
