#include <stdio.h>
#include <math.h>

/* Prototipo de funci�n */
void parimp(int, int *, int *);

/* Funci�n principal */
void main(void) {
    int I, N, NUM, PAR = 0, IMP = 0;

    printf("Ingresa el n�mero de datos: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        printf("Ingresa el n�mero %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP); /* Llamada a la funci�n. Paso de par�metros por valor y por referencia. */
    }

    printf("\nN�mero de pares: %d", PAR);
    printf("\nN�mero de impares: %d", IMP);
}

/* Funci�n para determinar si un n�mero es par o impar y actualizar las variables de conteo */
void parimp(int NUM, int *P, int *I) {
    int RES = pow(-1, NUM);

    if (RES > 0)
        (*P)++;
    else if (RES < 0)
        (*I)++;
}
