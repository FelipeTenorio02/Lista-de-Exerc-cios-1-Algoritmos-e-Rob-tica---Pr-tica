#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c, d, e, f, g, h, i;
    int x1, x2, r2, r1, p, q;

    printf("digite seu RG (a cada numero, um espaco): ");
    scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

    x1 = 10*a + 9*b + 8*c + 7*d + 6*e + 5*f + 4*g + 3*h + 2*i;
    r1 = x1%11;
    if(r1<2){
        p=0;
    }
    else{
        p= 11-r1;
    }

    x2 = 11*a + 10*b + 9*c + 8*d + 7*e + 6*f + 5*g + 4*h + 3*i + 2*p;
    r2 = x2%11;
    if(r2<2){
        q=0;
    }
    else{
        q= 11-r2;
    }
    printf("Os digitos verificadores sao: %d%d\n", p, q);


return 0;
}
