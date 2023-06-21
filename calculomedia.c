#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario < 500.00) {
        novoSalario = salario + salario * 0.15;
    }
    else if (salario >= 500.00 && salario <= 1000.00) {
        novoSalario = salario + salario * 0.10;
    }
    else {
        novoSalario = salario + salario * 0.05;
    }

    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}