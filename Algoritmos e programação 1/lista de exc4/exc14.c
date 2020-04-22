#include <stdio.h>

int main () {

     int valores[10], soma, prod, cd, cf, cont;

    soma=0;
    prod=0;
    cd=0;
    cf=0; 
    cont=0; 

    for (int i= 0; i <3; i++)
     {
        printf("\n Informe um numero: ");
        scanf("%d", &valores[i]);

         
             cont++;
             cont+=cont; 

        if (valores[i] >= 0 && valores[i] <= 10){
            prod*= valores[i]; 
            cd++; 
           
            printf("\n dentro %d produto: %d  ", cont, prod); 
      
            }
         else {
            soma +=valores[i];
            cf++; 
            printf("\n fora %d soma: %d ",cont, soma); 
        

        }
        
        }
    


}