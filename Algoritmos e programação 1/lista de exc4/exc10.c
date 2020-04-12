#include<stdio.h>

void main () {

    float salario_minimo, salario_maximo, salario;

    printf("\n Defina os padroes para salario");
    printf("\n Informe o minimo para salario: ");
    scanf("%f", &salario_minimo);
    printf("\n Informe o maximo aceitavel para salario: ");
    scanf("%f", &salario_maximo); 
    printf("\n Agora informe o salario: ");
    scanf("%f", &salario);

    if ((salario>salario_minimo)&&(salario<salario_maximo)) {

        printf("\n Salario R$ %.2f ", salario);
    } else
    {
        printf("\n Salario invalido"); 
    }
    
}