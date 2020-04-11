#include<stdio.h>

void main () {

    int idade;

    printf("\n Informe a idade: ");
    scanf("%d", &idade);

    while(idade!=((idade>0)&&(idade<150))) {
        printf("\n Idade: %d ", idade);
    } else
    {
        printf("\n Idade invalida "); 
    }
    
}