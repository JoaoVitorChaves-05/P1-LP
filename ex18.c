#include <stdio.h>

void imprimeDivisores(int n) {
    printf("Os divisores de %d são: ", n);

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else if (n < 0) {
        for (int i = n; i < 0; i++) {
            if (n % i == 0) {
                printf("%d ", i);
            }
        }
        for (int i = 1; i <= n * (-1); i++) {
            if (n % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }


}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    imprimeDivisores(n);
}