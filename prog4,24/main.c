#include <stdio.h>

void trueque(int *x, int *y) {
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x) {
    return (x + x);
}

int main() {
    int a = 5, b = 10;

    printf("Valores originales: a = %d, b = %d\n", a, b);

    // Intercambiar los valores de a y b usando la función trueque
    trueque(&a, &b);

    printf("Después de intercambiar: a = %d, b = %d\n", a, b);

    // Calcular el doble de a usando la función suma
    int resultado = suma(a);
    printf("El doble de a es: %d\n", resultado);

    return 0;
}
