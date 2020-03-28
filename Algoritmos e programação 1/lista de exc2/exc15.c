#include<stdio.h>
#include<math.h>
#include<time.h>

int main () {

    int anoatual,  anonascimento, idade;

    printf("\n Informe o seu ano de nascimento: ");
    scanf("%d ", &anonascimento); 
    
    time_t data_ano ;
    time (&data_ano); 

   struct tm *data = localtime(&data_ano);
   anoatual = (data->tm_year+1900);   
   printf("%d\n",anoatual);
    idade= anoatual-anonascimento; 
    
   if (idade >=18) {
       printf("\n Voce pode votar este ano "); 
   } 
   if (idade<18) {
       printf("\n voce nao pode votar ainda"); 
   }
   return 0;
}