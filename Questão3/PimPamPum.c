#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=1;
    int b, c;

    printf("Digite um numero inteiro que seja positivo: ");
    scanf("%d", &b);

    if(b<=0){
        printf("***ERRO***\n");
        printf("Digite um numero INTEIRO, POSITIVO que seja MAIOR QUE 0...\n\n ");
        }

    while(a<=b){
        if(a%2==0 && a%3==0){
            printf("PIM PAM, ");
        }
        else if(a%2==0){
            printf("Pim, ");
            }
        else if(a%3==0){
            printf("Pam, ");
        }
        else{
            printf("%d, ", a);
        }
        a++;

    }







return 0;
}
