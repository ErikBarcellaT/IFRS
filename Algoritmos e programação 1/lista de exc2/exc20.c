#include<stdio.h>
#include<math.h>
#define caixaazulejo 1.5

int main () {
    
    float comprimento , largura, altura, areatotal, caixasnecessarias;

    printf("\n Informe o comprimento: ");
    scanf("%f", &comprimento );
    printf("\n Informe a largura: "); 
    scanf("%f",&largura);
    printf("\n informe a altura : ");
    scanf("%f", &altura); 


    areatotal=2*(comprimento*largura+comprimento*altura+largura*altura); 

    printf("\n Tem %.2f metros quadrados de area ", areatotal); 
    caixasnecessarias= (areatotal/caixaazulejo); 
    printf("\n Sera necessario %.0f caixas de azulejos ", caixasnecessarias); 

    
    

    


}