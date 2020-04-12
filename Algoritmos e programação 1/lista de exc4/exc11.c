#include <stdio.h>

int main () {

    int n1,n2,new_value, divisao ;

    n1=0;
    n2=0;
    new_value=0; 

    printf("\n Informe o primeiro numero "); 
    scanf("%d",&n1);
    printf("\n Informe o segundo numero "); 
    scanf("%d",&n2);
    while (n2==0)
    {
        printf("\n Informe um novo valor para o segundo numero: ");
        scanf("%d", &n2); 
    }
      divisao=(n1/n2);
      printf("\n A divisao ehh %d ", divisao); 
         
    }

    

    
