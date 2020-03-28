#include <stdio.h>
#include<math.h>

int main () {

    float custofabrica,percentualvendedor, imposto, valorfinal;

    printf("\n Informe o preco de fabrica do veiculo: ");
    scanf("%f", &custofabrica); 
    imposto= (custofabrica*45/100);
    printf(" \n imposto %.2f", imposto );
    percentualvendedor=(custofabrica*28/100);

   
   
    custofabrica=(custofabrica+imposto);
    printf("\n custo fabrica c imposto %.2f ", custofabrica); 
    
    valorfinal=(custofabrica+percentualvendedor);
    printf("\n o custo final ehh R$  %.2f ", valorfinal); 

}