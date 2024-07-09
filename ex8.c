#include <stdio.h>

int dividir(int dividendo, int divisor) {
    int quociente = 0;

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    return quociente;
}

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    while (dividendo <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite o dividendo: ");
        scanf("%d", &dividendo);
    }

    printf("Digite o divisor: ");
    scanf("%d", &dividendo);

    while (divisor <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite o divisor: ");
        scanf("%d", &divisor);
    }

    printf("Resultado da divisão: %d", dividir(dividendo, divisor));
}