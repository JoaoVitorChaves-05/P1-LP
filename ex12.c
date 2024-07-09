#include <stdio.h>

int somaN(int);

int main(){
    int n;
    printf("N: ");
    scanf("%i",&n);
    while(n<=0){
        printf("N: ");
        scanf("%i",&n);
    }
    printf("Soma: %i\n",somaN(n));
}

int somaN(int n){
    int r = 0;
    for(int i=1;i<=n;i++)
        r = r + i;
    return r;
}