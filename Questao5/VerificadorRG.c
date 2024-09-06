#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c, d, e, f, g, h;
    int p, r, q;

    printf("digite seu RG (a cada numero, um espaco): ");
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    p = 2*a + 3*b + 4*c + 5*d + 6*e + 7*f + 8*g + 9*h;
    r = p%11;
    q = 11-r;

    if(q>=0 && q<=9){
        printf("O digito verificador e: %d\n", q);
    }
    else{
        printf("O digito verificador e: X\n");
    }


return 0;
}
