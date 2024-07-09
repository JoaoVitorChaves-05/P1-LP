#include <stdio.h>
#include <math.h>


int primo(int);
int n_primos(int,int);

int main(){
    int n1, n2;
    printf("N1: ");
    scanf("%i",&n1);
    printf("N2: ");
    scanf("%i",&n2);
    printf("Existem %i primos entre %i e %i",n_primos(n1,n2),n1,n2);
}

int primo(int n){
    if (n==1)
        return 0;
    for(int i=2;i<n;i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int n_primos(int x, int y){
    int cont = 0;
    for(int i=x+1;i<y;i++)
        cont += primo(i);
    return cont;
}

