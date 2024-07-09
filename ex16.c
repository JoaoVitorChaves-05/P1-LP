#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int combinacoes(int n, int r) {
    if (r > n) {
        return 0; // Não há combinações se r é maior que n
    }
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}

int main() {
    int n, r;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de r: ");
    scanf("%d", &r);

    printf("O número de combinações de %d objetos tomados %d de cada vez é %d\n", n, r, combinacoes(n, r));
}