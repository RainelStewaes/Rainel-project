#include <stdio.h>

/* Prototipos de funciones */
void Lectura(int[], int);
int Binaria(int[], int, int);

const int MAX = 100;

int main() {
    int RES, ELE, TAM, VEC[MAX];

    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1); // Verifica que el tama�o del arreglo sea correcto

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE); // Llama a la funci�n que busca en el arreglo

    if (RES != -1) {
        printf("\nEl elemento se encuentra en la posici�n: %d", RES);
    } else {
        printf("\nEl elemento no se encuentra en el arreglo");
    }

    return 0;
}

/* Funci�n para leer un arreglo unidimensional de T elementos de tipo entero */
void Lectura(int A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

/* Funci�n para realizar una b�squeda binaria */
int Binaria(int A[], int T, int E) {
    int IZQ = 0, DER = T - 1;

    while (IZQ <= DER) {
        int CEN = (IZQ + DER) / 2;

        if (A[CEN] == E) {
            return CEN; // Elemento encontrado, devuelve la posici�n
        } else if (A[CEN] < E) {
            IZQ = CEN + 1;
        } else {
            DER = CEN - 1;
        }
    }

    return -1; // No se encontr� el elemento en el arreglo
}
