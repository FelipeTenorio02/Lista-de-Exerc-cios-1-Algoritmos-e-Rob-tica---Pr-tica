#include<stdio.h>
#include<stdlib.h>

int main(){

    int p,np;
    int n=1;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &np);

    if(np<=1){
        printf("***ERRO***\n");
        printf("Digite um numero INTEIRO, POSITIVO que seja MAIOR QUE 1...\n\n ");
    }
    else{
        printf("Divisores de %d ==> 1", np);
        for(p=2; p<np; p++){
            if(np%p == 0){
            printf(" %d", p);
            n=0;
            }
        }
        printf(" e %d\n", np);
        if(n){
            printf("Numero primo!\n");
        }
        else{
            printf("O numero escolhido nao e primo =( \n");
        }
    }




 return 0;
}
