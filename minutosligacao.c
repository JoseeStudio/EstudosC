#include <stdio.h>

int main() {
    int minutos;
    float valor;

    printf("Digite a quantidade de minutos da ligacao: ");
    scanf("%d", &minutos);

    if (minutos <= 3) {
        valor = 2.00 + 1.00;
    }
    else {
        int intervalos = (minutos - 3) / 5;
        int minutosRestantes = (minutos - 3) % 5;
        valor = 2.00 + 1.00 + (intervalos * 1.50) + (minutosRestantes * 0.25);
    }

    printf("Valor a ser pago: R$ %.2f\n", valor);

    return 0;
}