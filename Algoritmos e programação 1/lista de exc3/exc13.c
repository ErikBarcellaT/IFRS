#include<stdio.h>
#include<math.h>

int main () {

   float quantidade, preco_unitario, total, total_a_pagar,desconto; 
    char nome [61];

    printf("\n Informe o nome do produto: "); 
    scanf(" %s", &nome); 
    printf("\n Informe a quantidade:");
    scanf("%f", &quantidade);
    printf("\n Informe o peco unitario R$: ");
    scanf("%f", &preco_unitario); 

    total=( preco_unitario*quantidade);
    printf("\n o valor total foi R$ %.2f ", total);

    if (quantidade<=5) { 
        desconto=(total*2/100);
        total_a_pagar=(total-desconto);
        printf("desconto R$: %.2f, total a pagar R$: %.2f", desconto, total_a_pagar); 
    } else if (quantidade>5&&quantidade<=10) {
        desconto=(total*3/100);
        total_a_pagar=(total-desconto);
        printf("desconto R$: %.2f, total a pagar R$: %.2f", desconto, total_a_pagar); 
    } else if (quantidade>10) {
        desconto=(total*5/100);
        total_a_pagar=(total-desconto);
        printf("desconto R$: %.2f, total a pagar R$: %.2f", desconto, total_a_pagar); 
    }

    

}