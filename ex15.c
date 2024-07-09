#include <stdio.h>

int verificaResto5(int x, int y) {
    int contador = 0;

    for (int i = x; i <= y; i++) {
        if (y % 13 == 5)
            printf("%d ao dividir por 13 sobra 5.\n", i);
    }
}

int main() {
    int x, y;

    printf("Digite o menor valor do intervalo: ");
    scanf("%d", &x);

    printf("Digite o maior valor do intervalo: ");
    scanf("%d", &y);

    verificaResto5(x, y);
}