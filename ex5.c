#include <stdio.h>

int calculaDivisores(int n) {
    int contagem = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            contagem++;
        }
    }
    return contagem;
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

    printf("O numero de divisores de %d eh %d\n", numero, numero_de_divisores(numero));

}
