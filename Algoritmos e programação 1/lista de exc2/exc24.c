#include<stdio.h>
#include<math.h>

int main () {

    int qntdatual, qntdminima, qntdmaxima, media; 

    printf("\n Informe a quantidade atual no estoque: ");
    scanf("%d", &qntdatual);
    printf("\n informe a quantidade minima permitida: "); 
    scanf("%d", &qntdminima);
    printf("\n informe a quantidade maxima:");
    scanf("%d", &qntdmaxima); 

    media= (qntdmaxima+qntdminima/2);

    if (qntdatual>=media){
        printf("NAO EFETUAR COMPRA ");
    } else if (qntdatual<media) {
        printf("EFETUAR COMPRA"); 
    }
}