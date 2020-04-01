#include<stdio.h>
#include<math.h>

int main () {

    float h , peso_ideal;
    int sexo; 

    printf("\n informe o sexo\n  (1) Feminino (2) Masculino: ");
    scanf("%d",&sexo); 
    printf("\n informe a altura: ");
    scanf("%f",&h); 

    switch (sexo)
    {
    case 1:
       peso_ideal=((62.1*h)-44.7);
       printf("\n o peso ideal para a pesso do sexo feminimo informado ehh %.1f ", peso_ideal); 
        break;
    case 2: 
        peso_ideal= ((72.7*h)-58);
        printf("\n o peso ideal para a pesso do sexo masculino informado ehh %.1f ", peso_ideal); 
        break;
    default:
        break;
    }
    
}