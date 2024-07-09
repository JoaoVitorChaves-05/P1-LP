#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

float calculateS(int n) {
    return (1 + 1.0/fatorial(2) + 1.0/fatorial(3) + 1.0/fatorial(4) + 1.0/fatorial(5) + 1.0/fatorial(n));
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