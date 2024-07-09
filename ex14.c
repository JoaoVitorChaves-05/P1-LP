#include <stdio.h>

int function(int n) {
    for (int i = 1; i <= n; i++) {
        if (i * i > n)
            return i;
    }
}

int main() {
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }

    printf("O menor inteiro positivo cujo quadrado é superior ao valor dado é: %d\n", function(num));
}