#include <stdio.h>

void fibonacci(int n) {
    int a = 1, b = 1, c;

    if (n >= 1) {
        printf("%d ", a);
    }

    if (n >= 2)
        printf("%d ", b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
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

    printf("A série de Fibonacci até o %d-ésimo termo é:\n", num);
    fibonacci(num);

}