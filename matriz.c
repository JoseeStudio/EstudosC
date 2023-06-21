#include <stdio.h>

int main() {
    int A[12], B[12], C[24];
    int i, j, k;
    int countB = 0;

    printf("Digite os valores para a matriz A:\n");
    for (i = 0; i < 12; i++) {
        scanf("%d", &A[i]);

        if (A[i] % 3 == 0 || A[i] % 7 == 0) {
            B[countB] = A[i];
            countB++;
        }
    }

    for (i = 0; i < 12; i++) {
        C[i] = A[i];
    }

    for (j = 0; j < countB; j++) {
        C[i] = B[j];
        i++;
    }

    printf("\nMatriz A:\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("\nMatriz B:\n");
    for (i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("\nMatriz C:\n");
    for (i = 0; i < 24; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}