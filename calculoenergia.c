
#include <stdio.h>

int main() {
    float salarioMinimo, valorQuilowatt, valorAPagar, valorDesconto, valorAtraso;
    int quantidadeQuilowatts;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite a quantidade de quilowatts gasta pela residencia: ");
    scanf("%d", &quantidadeQuilowatts);

    valorQuilowatt = salarioMinimo / 1000;

    valorAPagar = quantidadeQuilowatts * valorQuilowatt;

    valorDesconto = valorAPagar * 0.08;
    float valorAPagarDesconto = valorAPagar - valorDesconto;

    valorAtraso = valorAPagar * 0.1;
    float valorAPagarAtraso = valorAPagar + valorAtraso;

    printf("\nValor de cada quilowatt: R$ %.2f\n", valorQuilowatt);
    printf("Valor a ser pago pela residencia: R$ %.2f\n", valorAPagar);
    printf("Valor com desconto de 8%%: R$ %.2f\n", valorAPagarDesconto);
    printf("Valor com acrescimo de 10%%: R$ %.2f\n", valorAPagarAtraso);

    return 0;
}