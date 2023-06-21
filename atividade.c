#include <stdio.h>

int main() {
    float pesoKg, pesoGramas, engordou;

    printf("Digite o peso em Kg: ");
    scanf("%f", &pesoKg);

    pesoGramas = pesoKg * 1000;
    printf("O peso em gramas é: %.2f\n", pesoGramas);
    
    engordou = pesoGramas + (pesoGramas * 0.15);
    printf("O novo peso se engordar 15%% é: %.2f\n", engordou);
    

    return 0;
}
