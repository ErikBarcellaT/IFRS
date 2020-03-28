#include<stdio.h>
#include <stdlib.h>

void main () {

float valorhora,horasmes, total;

printf("\n Informe o valor da hora : ");
scanf("%f", &valorhora);
printf("\n Informe agora quantas horas voce trabalhou este mes : ");
scanf("%f ", &horasmes);
total=valorhora*horasmes;

printf("\n o seu salario de R$ %2.f ", total);

    system("pause");
}
