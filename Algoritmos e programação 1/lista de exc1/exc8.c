#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {
    float totaleleitores, validos, brancos, nulos;
    totaleleitores=0;
    validos=0;
    brancos=0;
    nulos=0;
    printf("\n Informe o numero de votos validos:");
    scanf("%f", &validos);
    printf("\n Informe o numero de votos em branco:");
    scanf("%f", &brancos);
    printf("\n Informe o numero de votos nulos:");
    scanf("%f", &nulos);
    totaleleitores=(validos+brancos+nulos);
    validos=100*(validos/totaleleitores);
    brancos=100*(brancos/totaleleitores);
    nulos=100*(nulos/totaleleitores);
    printf("O NUMERO TOTAL DE ELEITORES EHH %.0f \n\n", totaleleitores);
    printf("a porcentagem de votos validos ehh %.2f por cento\n" , validos);
    printf("a quantidade de votos em branco ehh %.2f por cento\n", brancos);
    printf("a quantidade de votos nulos ehh %.2f por cento \n", nulos);
    
        
    
    return(0); 


        
    
}
