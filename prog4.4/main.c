#include <stdio.h>

/* Prototipos de funciones */
int f1(void);
int f2(void);
int f3(void);
int f4(void);

/* Variable global */
int K = 3;

/* Funci�n principal */
void main(void) {
    int I;
    for (I = 1; I <= 3; I++) {
        printf("\nEl resultado de la funci�n f1 es: %d", f1());
        printf("\nEl resultado de la funci�n f2 es: %d", f2());
        printf("\nEl resultado de la funci�n f3 es: %d", f3());
        printf("\nEl resultado de la funci�n f4 es: %d", f4());
    }
}

/* Definici�n de la funci�n f1 */
int f1(void) {
    K += K;
    return K;
}

/* Definici�n de la funci�n f2 */
int f2(void) {
    int K = 1;
    K++;
    return K;
}

/* Definici�n de la funci�n f3 */
int f3(void) {
    static int K = 8;
    K += 2;
    return K;
}

/* Definici�n de la funci�n f4 */
int f4(void) {
    int K = 5;
    K = K + ::K;
    return K;
}
