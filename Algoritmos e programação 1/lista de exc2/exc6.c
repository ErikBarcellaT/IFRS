#include<stdio.h>
#include<math.h>

int main () {
    float  num1, num2, divisao;

    printf("\n informe o valor do numero 1 : ");
    scanf("%f", &num1);
    printf("\n Informe o valor do numero 2 : ");
    scanf("%f", &num2);
    divisao= num1/num2;
    if (num1/num2!=0)
    {
        printf("o seu resultado ehh %2.f", divisao);
    } else
    {
        printf("Informe um valor valido ");
    }
    
    

}