#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, n2, resto;
    int x=0, y=1;


    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n<=0){
        printf("***ERRO***\n");
        printf("Digite um numero INTEIRO, que seja POSITIVO e MAIOR QUE 0...\n");
        }
    n2=n;

    while(n>0){
        resto = n%2;
        x = x+resto*y;
        n = n/2;
        y = y*10;
    }

    printf("A representacao da base binaria do numero %d e: %d\n\n", n2, x);







return 0;
}

