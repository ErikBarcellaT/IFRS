#include<stdio.h>
#include<math.h>

int main () {

    int a,b,c;
    
    printf("\n Informe os valores do lado a,b,c: ");
    scanf("%d,%d,%d", &a,&b,&c);

    if ((a<b+c)&&(b<a+c)&&(c<a+b)) {
        if ((a==b)&&(b==c)) {
            printf("\n triangulo equilatero ");
        } else if ((a==b)||(b==c)||(a!=c)) {
            printf("\n triangulo isoceles ");
        } else {
            printf("\n triangulo escaleno ");
        }
    } else
    {
        printf("\n nao eh possivel formar um triangulo ");
    }
    
}