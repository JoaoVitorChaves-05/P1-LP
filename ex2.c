#include <stdio.h>

char calculaConceito(float media) {

    if (media <= 4.9)
        return 'D';

    if (media <= 6.9)
        return 'C';

    if (media <= 8.9)
        return 'B';

    return 'A';
}

int main() {
    float media;
    printf("Insira a média do aluno: ");
    scanf("%f", &media);

    while (media < 0 || media > 10) {
        printf("Insira um número entre 0 a 10.\n");
        printf("Insira a média do aluno: ");
        scanf("%f", &media);
    }

    printf("Conceito: %c\n", calculaConceito(media));
}