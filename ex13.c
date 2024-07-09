#include <stdio.h>

int verficaTriangulo(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && c == b)
            return 1;

        if (a == b || a == c || b == c)
            return 2;

        return 3;
    } else {
        return 0;
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &lado1);

    while (lado1 <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &lado1);
    }

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &lado2);

    while (lado2 <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &lado2);
    }

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &lado3);

    while (lado3 <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &lado3);
    }

    printf("%d", verficaTriangulo(lado1, lado2, lado3));
}