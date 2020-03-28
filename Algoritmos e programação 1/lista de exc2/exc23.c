#include<stdio.h>
#include<math.h>

int main () {

    float numeroconta, saldo, debito, credito;

    printf("\n Informe o numero da conta: ");
    scanf("%f", &numeroconta);
    printf("\n Informe o saldo da conta R$: ");
    scanf("%f", &saldo);
    printf("\n Informe o valor do debito R$: ");
    scanf("%f", &debito);
    printf("\n Informe o valor a ser creditado na conta: ");
    scanf("%f", &credito); 

    saldo=(saldo-debito+credito); 

    printf("\n O saldo da conta eh R$ %.2f ", saldo); 

    if (saldo>=0){
        printf("\n SALDO POSITIVO " );
    } else
    {
        printf("\n SALDO NEGATIVO "); 
    }
    
}