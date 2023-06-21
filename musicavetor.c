#include <stdio.h>
#include <string.h>

#define MAX_BANDAS 10

typedef struct {
    char nome[100];
    char tipoMusica[100];
    int numIntegrantes;
    int posicaoRanking;
} Banda;

void ordenarBandasPorNome(Banda bandas[], int tamanho) {
    int i, j;
    Banda temp;
    for (i = 0; i < tamanho - 1; i++) {
    for (j = 0; j < tamanho - i - 1; j++) {
    if (strcmp(bandas[j].nome, bandas[j + 1].nome) > 0) {
    temp = bandas[j];
    bandas[j] = bandas[j + 1];
    bandas[j + 1] = temp;
            }
        }
    }
}

int main() {
    Banda bandas[MAX_BANDAS];

    printf("Digite os dados das bandas:\n");
    for (int i = 0; i < MAX_BANDAS; i++) {
        printf("Banda %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", bandas[i].nome);
        printf("Tipo de música: ");
        scanf("%s", bandas[i].tipoMusica);
        printf("Número de integrantes: ");
        scanf("%d", &bandas[i].numIntegrantes);
        printf("Posição no ranking das favoritas: ");
        scanf("%d", &bandas[i].posicaoRanking);
        printf("\n");
    }

    ordenarBandasPorNome(bandas, MAX_BANDAS);

    printf("Dados das bandas (ordenados por nome):\n");
    for (int i = 0; i < MAX_BANDAS; i++) {
        printf("Banda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Tipo de música: %s\n", bandas[i].tipoMusica);
        printf("Número de integrantes: %d\n", bandas[i].numIntegrantes);
        printf("Posição no ranking das favoritas: %d\n", bandas[i].posicaoRanking);
        printf("\n");
    }

    return 0;
}
