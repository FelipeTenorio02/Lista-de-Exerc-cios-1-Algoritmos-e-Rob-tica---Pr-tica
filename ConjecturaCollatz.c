#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Erro!");
        return 1;
    }

    printf("n = %d\n", n);
    while(n>1){
        if(n %2 == 1){
            n = 3*n+1;
        }
        else{
            n = n/2;
        }
        printf("n = %d\n", n);
    }



    return 0;
}

