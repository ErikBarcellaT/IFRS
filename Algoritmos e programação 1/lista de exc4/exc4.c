#include<stdio.h>
#include<math.h>
// Caixa eletronico
// (a)= consulta de saldo, (b)= saque, (c)= deposito, (d)= sair.
int main () {
    char a, b, c, d, operacao; 
    float saldo, saque, deposito;
    saldo = 0;
    saque = 0;
    deposito = 0;

    do {
        printf("\n\n Consultar Saldo(a)  Saque(b):  Deposito(c):  Sair(d):");
        scanf(" %c", &operacao);  

        if (operacao == 'a') { 
            printf("Seu saldo atual R$ %.2f reais", saldo);
        } else if(operacao == 'b'){
            printf("informe o valor para saque :");
            scanf("%f", &saque);
            printf("Foram debitados R$ %.2f reais da sua conta.", saque);
            saldo = (saldo - saque);
            printf("\nSaldo atual R$ %.2f reais.", saldo);
        } else if(operacao == 'c'){
            printf("informe o valor do deposito:");
            scanf("%f", &deposito);
            printf("Foram depositados R$ %.2f reais na sua conta.", deposito);
            saldo = (saldo + deposito);
            printf("\nsaldo atual= R$ %.2f reais.", deposito);
        } else if(operacao == 'd'){
            printf("Fim das operações.");
        }

    } while(operacao != 'd' );  

    return 0;

}