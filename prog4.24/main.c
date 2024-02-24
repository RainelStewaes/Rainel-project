#include <stdio.h>
/* Par�metros y funciones. */
int f1(void);
int f2(void); /* Prototipos de funciones. */
int f3(void);
int f4(void);
int K = 5;

void main(void)
{
    int I;
    for (I = 1; I <= 4; I++)
    {
        printf("\n\nEl resultado de la funci�n f1 es: %d", f1());
        printf("\nEl resultado de la funci�n f2 es: %d", f2());
        printf("\nEl resultado de la funci�n f3 es: %d", f3());
        printf("\nEl resultado de la funci�n f4 es: %d", f4());
    }
}

int f1(void)
{
    K *= K; /* Multiplica K por s� mismo */
    return K;
}

int f2(void)
{
    static int K = 3; /* Variable est�tica K */
    K++; /* Incrementa la variable K */
    return K;
}

int f3(void)
{
    static int K = 6; /* Variable est�tica K */
    K += 3; /* Incrementa K en 3 */
    return K;
}

int f4(void)
{
    int K = 4; /* Variable local K */
    K = K + ::K; /* Suma la variable local K y la variable global K */
    return K;
}
