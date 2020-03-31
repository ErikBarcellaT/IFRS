#include<stdio.h>

int main () {

    int user, pass;

    printf("\n informe o usuario: ");
    scanf("%d", &user );
   
    if (user !=1234) {
        printf("\n Usuario invalido ");
    } else if (user==1234) {
         printf("\n informe a senha: "); 
         scanf("%d", &pass); 

         if (pass!=9999) {
             printf("\n Senha invalida ");
         } else if (pass ==9999) {
             printf("\n ACESSO PERMITIDO"); 
         }

    }
}