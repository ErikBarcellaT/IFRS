#include <stdio.h>
#include<math.h> 
#define precocomb 4.599
int main () {

    float odometroincial, odometrofinal, combgasto, valorrecebido, media, lucro; 

    printf("\n Informe o odometro incial: "); 
    scanf("%f",&odometroincial); 
    printf("\n Informe o odometro final: ");
    scanf("%f",&odometrofinal); 
    printf("\n informe quantos litros de combustivel foram gastos: ");
    scanf("%f",&combgasto); 
    printf("\n Informe quanto recebeu de valor pelas viagens: ");
    scanf("%f", &valorrecebido); 
    media=((odometrofinal-odometroincial)/combgasto); 
    combgasto=(combgasto*precocomb);
    lucro=(valorrecebido-combgasto); 
    printf("\n A media do veiculo foi %.2f km/l", media ); 
    printf("\n o lucro foi de R$ %.2f ", lucro ); 
}