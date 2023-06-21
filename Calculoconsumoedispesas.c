#include <stdio.h>

int main() {
    char nome[50];
    float consumo, valorConta;
    char tipoConsumidor;

    // Entrada dos dados
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Digite o consumo de agua em metros cubicos: ");
    scanf("%f", &consumo);

    printf("Digite o tipo de consumidor (R - Residencial, C - Comercial, I - Industrial): ");
    scanf(" %c", &tipoConsumidor);

    // Cálculo do valor da conta de água
    switch (tipoConsumidor) {
        case 'R':
        case 'r':
            valorConta = 5.00 + consumo * 0.05;
            break;
        case 'C':
        case 'c':
            if (consumo <= 80)
                valorConta = 500.00;
            else
                valorConta = 500.00 + (consumo - 80) * 0.25;
            break;
        case 'I':
        case 'i':
            if (consumo <= 100)
                valorConta = 800.00;
            else
                valorConta = 800.00 + (consumo - 100) * 0.04;
            break;
        default:
            printf("Tipo de consumidor invalido!\n");
            return 0;
    }

    // Exibição do resultado
    printf("Nome do cliente: %s\n", nome);
    printf("Tipo de consumidor: %c\n", tipoConsumidor);
    printf("Consumo: %.2f m3\n", consumo);
    printf("Valor da conta a ser paga: R$ %.2f\n", valorConta);

    return 0;
}