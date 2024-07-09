#include <stdio.h>

int calculateDays(int years, int months, int days) {
    return days + months * 30 + years * 365;
}

int main() {
    int years, months, days;

    printf("Dias: ");
    scanf("%d", &days);

    while (days < 0 || days > 30) {
        printf("Insira um número entre 1 e 30.\n");
        printf("Dias: ");
        scanf("%d", &days);
    }

    printf("Months: ");
    scanf("%d", &months);

    while (months < 0 || months > 12) {
        printf("Insira um número entre 1 e 12.\n");
        printf("Months: ");
        scanf("%d", &months);
    }

    printf("Years: ");
    scanf("%d", &years);

    while (years < 0) {
        printf("Insira um número maior que 0.\n");
        printf("Years: ");
        scanf("%d", &years);
    }
    
    printf("Idade em dias: %d", calculateDays(years, months, days));
}