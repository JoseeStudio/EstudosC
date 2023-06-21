#include <stdio.h>

int main() {
    int A[10], B[10], C[20];
    int i, j, k;

    printf("Digite os 10 elementos do vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 elementos do vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    i = 0;  
    j = 0;  
    k = 0;  

    while (i < 10 && j < 10) {
        C[k++] = A[i++];
        C[k++] = B[j++];
    }

    while (i < 10) {
        C[k++] = A[i++];
    }

    while (j < 10) {
        C[k++] = B[j++];
    }

    printf("Vetor C:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
