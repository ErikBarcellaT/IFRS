#include<stdio.h>
#include<math.h>

int main () {

float media,  totalcomb, primeireabastecida,numerovoltas,comprimentopista, numeroreabestecimentos,comptotal; 
printf("\n informe o comprimento da pista em metros: ");
scanf("%f", &comprimentopista); 
printf("\n Informe o numero total de voltas do grande premio: ");
scanf("%f", &numerovoltas); 
printf("\n informe quantos reabastecimentos deseja fazer: ");
scanf("%f", &numeroreabestecimentos); 
printf("\n Informe o consumo em KM/l de combustivel do veiculo: "); 
scanf("%f", &media); 



comptotal=(comprimentopista*numerovoltas); 
totalcomb=(comptotal/media);
primeireabastecida=(totalcomb/numeroreabestecimentos); 

printf("\n eh necessario %.f litros ate o primeiro reabastecimento", primeireabastecida); 





}