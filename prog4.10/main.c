# include <stdio.h>

/* Prototipo de funci�n */
int multiplo(int, int);

/* Funci�n principal */
void main(void) {
    int NU1, NU2, RES;
    printf("\nIngresa los dos n�meros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);

    if (RES)
        printf("\nEl segundo n�mero es m�ltiplo del primero");
    else
        printf("\nEl segundo n�mero no es m�ltiplo del primero");
}

/* Funci�n para determinar si N2 es m�ltiplo de N1 */
int multiplo(int N1, int N2) {
    int RES;
    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;
    return (RES);
}
