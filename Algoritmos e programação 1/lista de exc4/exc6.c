#include <stdio.h>

int main () {

    int valor,new_value ;

    printf("\n Informe o numero: "); 
    scanf("%d",&valor);
    if ((valor>=1)&&(valor<=10)) {
        printf("\n ok");
    } else if ((valor<1)||(valor>10)) {

        printf("\n Informe um novo valor: ");
        scanf(" %d", &new_value);
        printf("\n %d", new_value); 
    }

    

    
}