#include <stdio.h>

/* Aplicaci�n de operadores. */
int main(void) {
    int i = 15, j, k, l;

    j = (15 > i--) > (14 < ++i);
    printf("\nEl valor de j es: %d", j);

    i = 15; // Reiniciamos el valor de i para evitar resultados inesperados

    k = !('b' != 'd') > (!i - 1);
    printf("\nEl valor de k es: %d", k);

    l = (!(34 > (70 % 2)) || 0); // Corregimos el operador l�gico y eliminamos el car�cter no imprimible
    printf("\nEl valor de l es: %d", l);

    return 0;
}

