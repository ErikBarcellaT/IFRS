#include<stdio.h>
#include<math.h>

int main () 
{
float salariofixo,carrosvendidos, comissaocarro, percentualtotal, salariototal;

printf("\n informe o valor do salario fixo : ");
scanf("%f", &salariofixo);
printf("\n informe quantos carros foram vendidos: ");
scanf("%f", &carrosvendidos);
printf("\n informe qual o valor que o vendedor ganha por carro vendido: ");
scanf("%f", &comissaocarro);
printf("\n informe qual o valor total das vendas: "); 
scanf("%f", &percentualtotal);

comissaocarro=(comissaocarro*carrosvendidos);
percentualtotal=(percentualtotal*5/100);

salariototal=(salariofixo+comissaocarro+percentualtotal);

printf("\n O salario do vendedor sera de R$ %.2f ", salariototal ); 


}
