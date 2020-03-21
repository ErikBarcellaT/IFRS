#include <stdio.h>
#include <math.h>

int main () {
    float valoring, descontosocios, valoringsocios, totalarrecadado, totaldescontos, pagantes, criancas;
    int socios , totalparticipantes;

    printf("\n Digite o valor do ingresso: ");
    scanf("%f", &valoring);
    printf(" o valor do ingresso ehh %2.f", valoring);
    printf("\n Informe o numero de socios: ");
    scanf("%d", &socios);
    printf("\n Informe o numero de Participantes que NAO sao socios?");
    scanf("%f", &pagantes);
    printf("\n Informe o numero de criancas ?");
    scanf("%f", &criancas);
    totalparticipantes=(socios+pagantes+criancas);

    valoringsocios=(socios*valoring);
    descontosocios=(valoringsocios*30/100);
    valoringsocios=(valoringsocios-descontosocios);
    pagantes=(pagantes*valoring);
    criancas=(criancas*valoring);

    totaldescontos=(descontosocios+criancas);
    totalarrecadado=(valoringsocios+pagantes);

    printf("\n O valor arrecado com os socios foi de R$ %2.f\n", valoringsocios );
    printf("\n O valor arrecado com participantes foi de R$ %2.f\n", pagantes);
    printf("\n O numero total de participantes ehh %d\n", totalparticipantes);
    printf("\n O total arrecado foi R$ %2.f \n", totalarrecadado);
    printf("\n O valor total que deixou de ser arrecadado foi %2.f \n", totaldescontos);

    return(0);

}
