#include<stdio.h>
#include<math.h>

int main () {

    float n1,n2, media;

    n1=0;
    n2=0;

    printf("\n informe a nota 1: \n \n Nota 2:\n ");
    scanf("%f, %f", &n1, &n2);
    media = (n1+n2)/2; 
    printf("\n a media ehh %f!!!", media);
}