#include<stdio.h>
#include<math.h>
#define preco_gasolina 4.30
#define preco_alcool 3.90

int main () {

    float litros_abastecidos , desconto_alcool, desconto_gasolina , total ;
    char combustivel ;

    printf("\n Informe quantos litros forma abastecidos: ");
    scanf("%f", &litros_abastecidos);
    printf("\n Informe qual o combustivel abastecido\n (A) Alcool (G) Gasolina: ");
    scanf(" %c", &combustivel); 

    printf("\n %c ", combustivel); 
    printf("\n %.2f ", litros_abastecidos); 

    if (combustivel== 'a' && litros_abastecidos <=20) {
        desconto_alcool=(preco_alcool*3/100);
        total=(litros_abastecidos*(preco_alcool-desconto_alcool)); 

        printf("\n O valor com desconto de 3 por cento ehh R$ %.2f ", total); 
    } else if (combustivel== 'a'&& litros_abastecidos > 20) {
        desconto_alcool=(preco_alcool*5/100);
        total=(litros_abastecidos*(preco_alcool-desconto_alcool)); 

        printf("\n O valor com desconto de 5 por cento ehh R$ %.2f ", total); 
    } else if (combustivel== 'g' && litros_abastecidos <=20) {
        desconto_gasolina=(preco_gasolina*4/100);
        total=(litros_abastecidos*(preco_gasolina-desconto_gasolina)); 

        printf("\n O valor com desconto de 4 por cento ehh R$ %.2f ", total);
    } else if (combustivel== 'g' && litros_abastecidos >20) {
        desconto_gasolina=(preco_gasolina*6/100);
        total=(litros_abastecidos*(preco_gasolina-desconto_gasolina)); 

        printf("\n O valor com desconto de 6 por cento  ehh R$ %.2f ", total);
}
}