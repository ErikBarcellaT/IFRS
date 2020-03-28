#include<stdio.h>


int main () {

int horainicio, horafim, duracao;
printf("\n informe a hora de inicio : ");
scanf("%d", &horainicio);
printf("\n informe a hora de termino da partida : "); 
scanf("%d", &horafim);
duracao=horafim-horainicio; 

if (duracao<=24){
printf("\n a duracao da partida foi de %d horas ", duracao); 
} else
{
    printf("\n valores invalidos "); 
}




}