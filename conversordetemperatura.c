#include <stdio.h>

int main() {
    float Fahrenheit[10], Celsius[10];
    int i;

    for (i = 0; i < 10; i++) {
    printf("Digite a temperatura em Fahrenheit %d: ", i + 1);
    scanf("%f", &Fahrenheit[i]);
    }

    for (i = 0; i < 10; i++) {
    Celsius[i] = (5.0 / 9.0) * (Fahrenheit[i] - 32);
    }

    printf("\nFahrenheit\tCelsius\n");
    for (i = 0; i < 10; i++) {
    printf("%.2f\t\t%.2f\n", Fahrenheit[i], Celsius[i]);
    }

    return 0;
}