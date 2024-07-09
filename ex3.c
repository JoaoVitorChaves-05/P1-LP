#include <stdio.h>

float calculateMass(float altura, char gender) {
    if (gender == 'h')
        return 72.7 * altura - 58;
    return 62.1 * altura - 44.7;
}

int main() {
    float altura;
    char gender;

    printf("Insira a altura: ");
    scanf("%f", &altura);

    while (altura < 0) {
        printf("A altura não pode ser negativa.\n");
        printf("Insira a altura: ");
        scanf("%f", &altura);
    }

    printf("Insira o gênero: ");
    scanf("%c", &gender);

    while (gender != "h" || gender != "m") {
        printf("Insira 'h' para homem e 'm' para mulher.\n");
        printf("Insira o gênero: ");
        scanf("%c", &gender);
    }
}