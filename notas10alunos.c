#include <stdio.h>
int main() {

    float notas[10];
    int i;
    float soma = 0;
    float media;

    printf("Digite as 10 notas do aluno:\n");
    for (i = 0; i < 10; i++) {
     scanf("%f", &notas[i]);
    soma += notas[i];
    }

    printf("Notas inseridas:\n");
    for (i = 0; i < 10; i++) {
    printf("%.2f ", notas[i]);
    }
    printf("\n");

    media = soma / 10;

    printf("Media: %.2f\n", media);
    if (media >= 8) {
        printf("Resultado: Plenamente Satisfatorio (PS)\n");
    } else if (media >= 6) {
        printf("Resultado: Satisfatorio (S)\n");
    } else if (media >= 4) {
        printf("Resultado: Regular (R)\n");
    } else {
        printf("Resultado: Insatisfatorio (I)\n");
    }

    return 0;
}