#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {
int parcela;
float valorsalario, valoremprestimo; 

printf("\n Informe o valor de salario do funcionario : ");
scanf("%f", &valorsalario);
printf("\n Qual o valor que o funcionario deseja financiar: ");
scanf("%f", &valoremprestimo);
printf("\n Agora informe em quantas parcelas sera efetuado este emprestimos : ");
scanf("%d", &parcela );

if (valorsalario<0){
    printf("\n valor do salario nao pode ser negativo ");
} 
if(valorsalario==0){
    printf("\n valor do salario nao pode estar zerado");
}
if (valoremprestimo<0){
    printf("\n valor do emprestimo nao pode ser negativo ");
} 
if(valoremprestimo==0){
    printf("\n valor do emprestimo nao pode estar zerado");
}
if (parcela<0){
    printf("\n numero de parcelas nao pode ser negativa ");
} 
if(valorsalario==0){
    printf("\n numero de parcelas nao pode estar zerada");
}
printf("\n Confira os dados abaixo : \n Salario: %.2f \n Valor do emprestimos: %.2f \n Numero de parcelas: %d ", valorsalario, valoremprestimo, parcela);
parcela=(valoremprestimo/parcela);
if (parcela > (valorsalario*30/100)) {
    printf("\n O emprestimo nao pode ser concedido ");
} else
{
    printf("\n o emprestimo pode ser liberado ");
}


}