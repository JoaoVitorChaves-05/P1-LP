#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }
    
    printf("O fatorial de %d eh %d\n", numero, fatorial(numero));

}