#include<stdio.h>

int main () {

    int n1,n2,n3;

    printf("\n Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("\n Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("\n Informe o terceiro numero: ");
    scanf("%d", &n3);

    if ((n1>n2)&&(n1>n3)) {
        printf("\n O numero %d eh maior", n1);
    } else if ((n2>n1)&&(n2>n3)) {
        printf("\n o numero %d eh maior", n2);
    } else if ((n3>n1)&&(n3>n2)) {
        printf("o numero %d eh maior ", n3); 
    }
    
}   