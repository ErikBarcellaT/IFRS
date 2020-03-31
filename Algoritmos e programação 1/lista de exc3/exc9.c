#include<stdio.h>
#include<math.h>

int main () {

    float optativa, av1, av2, media;
    
    printf("\n Informe a nota da primeira avalicao: ");
    scanf("%f", &av1);
    printf("\n Informe a nota da segunda avalicao: ");
    scanf("%f", &av2);
    printf("\n informe o valor da avaliacao optativa: ");
    scanf("%f", &optativa); 

    if (optativa==-1) {
        media=(av1+av2)/2; 
        printf("\n A media ehh %.1f", media);
       
    } else if (av1<av2) {
        media=(av2+optativa)/2;
        printf("\n A media ehh %.1f", media);
    } else if (av1>av2) {
        media=(av1+optativa)/2;
         printf("\n A media ehh %.1f", media);
    }

    }