#include <stdio.h>
#include <math.h>

int verificaPrimo(int n) {
    if (n==1)
        return 0;
    for(int i=2;i<n;i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int main() {
    int numero;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        printf("Digite um número inteiro e positivo: ");
        scanf("%d", &numero);
    }

    if (verificaPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

}
