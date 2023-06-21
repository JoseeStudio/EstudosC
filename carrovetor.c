#include <stdio.h>

#define MAX_CARROS 10
#define MAX_OFERTAS 3

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
    float ofertas[MAX_OFERTAS];
} Carro;

float calcularMedia(float ofertas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += ofertas[i];
    }
    return soma / tamanho;
}

float encontrarMaiorOferta(Carro carros[], int tamanho) {
    float maiorOferta = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < MAX_OFERTAS; j++) {
            if (carros[i].ofertas[j] > maiorOferta) {
                maiorOferta = carros[i].ofertas[j];
            }
        }
    }
    return maiorOferta;
}

int main() {
    Carro carros[MAX_CARROS];

    // Preencher os dados dos carros
    for (int i = 0; i < MAX_CARROS; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Marca: ");
        scanf("%s", carros[i].marca);
        printf("Modelo: ");
        scanf("%s", carros[i].modelo);
        printf("Ano de fabricacao: ");
        scanf("%d", &carros[i].ano);
        for (int j = 0; j < MAX_OFERTAS; j++) {
            printf("Oferta %d: ", j + 1);
            scanf("%f", &carros[i].ofertas[j]);
        }
        printf("\n");
    }

    // Exibir os dados dos carros
    printf("Dados cadastrados:\n");
    for (int i = 0; i < MAX_CARROS; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano de fabricacao: %d\n", carros[i].ano);
        printf("Ofertas:");
        for (int j = 0; j < MAX_OFERTAS; j++) {
            printf(" %.2f", carros[i].ofertas[j]);
        }
        printf("\n\n");
    }

    // Calcular e exibir as médias das ofertas
    printf("Valores medios de cada carro:\n");
    for (int i = 0; i < MAX_CARROS; i++) {
        float media = calcularMedia(carros[i].ofertas, MAX_OFERTAS);
        printf("Carro %d: %.2f\n", i + 1, media);
    }

    // Encontrar e exibir a maior oferta entre todas
    float maiorOferta = encontrarMaiorOferta(carros, MAX_CARROS);
    printf("\nMaior oferta: %.2f\n", maiorOferta);

    return 0;
}
