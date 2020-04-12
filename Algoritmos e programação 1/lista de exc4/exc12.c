#include <stdio.h>

int main(void)
{
int n;
n=0; 

printf("\n Informe um numero inteiro: ");
scanf ("%d",&n);

    
    if(n%5==0)
    {
    printf("\n -numero multiplo de 5");
    }
    else
    {
    printf("\n  nao e multiplo de 5");
    }


return 0;
}