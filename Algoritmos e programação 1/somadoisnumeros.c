#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {

    int n1,n2;
    printf("informe o primeiro numero?");
    scanf("%d",&n1);
    printf("Informe o segundo numero?");
    scanf("%d",&n2);

    int soma , subtracao;

    soma = n1+n2;
    subtracao= n1-n2;

    printf("%d+%d=%d\n",n1,n2,soma);
    printf("%d-%d=%d",n1,n2,subtracao);



    }
