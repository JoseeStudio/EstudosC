#include <stdio.h>

int main() {
   float tempo, vm, distancia, lu;

   printf("Digite o tempo gasto na viagem (em horas): ");
   scanf("%f", &tempo);

   printf("Digite a velocidade média durante a viagem (em km/h): ");
   scanf("%f", &vm);

   distancia = tempo * vm;
   lu = distancia / 12;

   printf("Velocidade media: %.2f km/h\n", vm);
   printf("Tempo gasto na viagem: %.2f horas\n", tempo);
   printf("Distancia percorrida: %.2f km\n", distancia);
   printf("Quantidade de litros utilizada na viagem: %.2f litros\n", lu);

   return 0;
}