#include <stdio.h>

#define MAX_ALUNOS 100
#define MAX_QUESTOES 10

int main() {
    int numeroAlunos;
    char gabarito[MAX_QUESTOES + 1];  // +1 para o caractere nulo '\0'
    char respostas[MAX_ALUNOS][MAX_QUESTOES + 1];
    int acertos[MAX_ALUNOS] = {0};
    int i, j;

    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &numeroAlunos);

    printf("Digite o gabarito da prova (10 letras A, B, C, D ou E): ");
    scanf("%s", gabarito);

    for (i = 0; i < numeroAlunos; i++) {
    printf("Respostas do aluno %d (10 letras A, B, C, D ou E): ", i + 1);
    scanf("%s", respostas[i]);
    }

    for (i = 0; i < numeroAlunos; i++) {
    for (j = 0; j < MAX_QUESTOES; j++) {
    if (respostas[i][j] == gabarito[j]) {
                acertos[i]++;
            }
        }
    }

    // Exibição dos números dos alunos com suas respectivas notas
    printf("\nNumero do aluno\tNota\n");
    for (i = 0; i < numeroAlunos; i++) {
        printf("%d\t\t%d\n", i + 1, acertos[i]);
    }

    return 0;
}