#include <stdio.h>

void main () {

    int contador , senha ;
    contador = 0;

    printf("\ndigite a senha:");
    scanf("%d", &senha);

    while (senha!=12345)
    {
        printf ("digite a senha novamente: ");
        scanf("%d", &senha);
        contador = (contador+1); 
    } 
        if (contador ==0 ) {
            printf("\n Acesso com uma tentativa");
        } else {
            printf("\n acesso apos %d tentativas ", contador); 
        }
     


}