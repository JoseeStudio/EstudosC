#include <stdio.h>

#define MAX_LIVROS 5

typedef struct {
    char titulo[100];
    int anoEdicao;
    int numPaginas;
    float preco;
} Livro;

float calcularMediaPaginas(Livro livros[], int tamanho) {
    int somaPaginas = 0;
    for (int i = 0; i < tamanho; i++) {
    somaPaginas += livros[i].numPaginas;
    }
    return (float) somaPaginas / tamanho;
}

void encontrarLivroMaisBarato(Livro livros[], int tamanho, char titulo[], float *preco) {
    *preco = livros[0].preco;
    strcpy(titulo, livros[0].titulo);
    for (int i = 1; i < tamanho; i++) {
    if (livros[i].preco < *preco) {
    *preco = livros[i].preco;
    strcpy(titulo, livros[i].titulo);
        }
    }
}

int main() {
    Livro livros[MAX_LIVROS];

    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: ");
        scanf("%[^\n]s", livros[i].titulo);
        getchar();
        printf("Ano de edição: ");
        scanf("%d", &livros[i].anoEdicao);
        printf("Número de páginas: ");
        scanf("%d", &livros[i].numPaginas);
        printf("Preço: ");
        scanf("%f", &livros[i].preco);
        printf("\n");
    }

    printf("Dados cadastrados:\n");
    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Ano de edição: %d\n", livros[i].anoEdicao);
        printf("Número de páginas: %d\n", livros[i].numPaginas);
        printf("Preço: %.2f\n", livros[i].preco);
        printf("\n");
    }

    float mediaPaginas = calcularMediaPaginas(livros, MAX_LIVROS);
    printf("Média de páginas dos livros: %.2f\n", mediaPaginas);

    char tituloMaisBarato[100];
    float precoMaisBarato;
    encontrarLivroMaisBarato(livros, MAX_LIVROS, tituloMaisBarato, &precoMaisBarato);
    printf("Livro mais barato:\n");
    printf("Título: %s\n", tituloMaisBarato);
    printf("Preço: %.2f\n", precoMaisBarato);

    return 0;
}
