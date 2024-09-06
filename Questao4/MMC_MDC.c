#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, x, mdc, y, mmc;
    printf("Digite dois numeros inteiros e positivos: \n");
    printf("Numero1: ");
    scanf("%d", &n1);
    printf("numero2: ");
    scanf("%d", &n2);

    if(n1<=0 || n2<=0){
        printf("***ERRO***\n");
        printf("Digite um numero INTEIRO, POSITIVO que seja MAIOR QUE 0...\n\n ");
        }

    else {x=1;
    while((x<=n1)&&(x<=n2)){
       if(((n1%x)==0) && ((n2%x)==0)){
            mdc=x;
       }
       x=x+1;
        for(y=1; y>0; y++){
            mmc=(n1*y)%n2;
            if(mmc==0)break;
        }
    }

    printf("O MDC entre %d e %d = %d!   =)\n", n1, n2, mdc);
    printf("O MMC entre %d e %d = %d!   =)\n", n1, n2, n1*y);



}





return 0;
}

