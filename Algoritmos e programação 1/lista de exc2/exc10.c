#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PII 3.14

int main () {
float comprimento , area; 
int raio , diametro; 

printf("\n informe o raio da circunferencia : ");
scanf("%d ", & raio);

diametro= (raio*2);
comprimento=raio*(2*PII);
area= (raio*raio)*PII;

    printf("\n o diametro ehh %d , o comprimento %.2f e a  area %.2f ", diametro, comprimento, area);


system("pause");
}