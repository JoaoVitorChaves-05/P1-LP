#include <stdio.h>

int potencia(int base, int expoente) {
    int produto = 1;

    for (int i = 1; i <= expoente; i++) {
        produto *= base;
    }

    return produto;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    while (base <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite a base: ");
        scanf("%d", &base);
    }

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    while (expoente <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite o expoente: ");
        scanf("%d", &expoente);
    }

    printf("Resultado da potência: %d\n", potencia(base, expoente));
}