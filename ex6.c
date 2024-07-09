#include <stdio.h>

float calculateS(int n) {
    return (1 + 1.0/2 + 1.0/3 + 1.0/4 + 1.0/5 + 1.0/n);
}

int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }

    printf("Valor de S: %f\n", calculateS(numero));
}