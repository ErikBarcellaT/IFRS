#include<stdio.h>
#include<math.h>

int main () {

    int a,b,c;

     printf("\n informe o valor do lado A : ");
    scanf("%d", &a);
    printf("\n informe o valor do lado B: ");
    scanf("%d", &b);
    printf("\n informe o valor do lado C: ");
    scanf("%d", &c);

    if ((a<b+c)&&(b<c+a)&&(c<b+a)) {
        printf("\n OK, forma um triangulo os lados informados "); 
    } else
    {
        printf("\n nao forma um triangulo ");
    }
    

}