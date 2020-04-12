#include<stdio.h>
#include <math.h>

void main () {

    float n1,n2,n3,media ;

    printf("\n informe a primeira nota: ");
    scanf("%f", &n1);                               //n1+n2 / n2+n3 / n1+n3
    printf("\n informe a segunda nota: ");
    scanf("%f", &n2);
    printf("\n informe a terceira nota: ");
    scanf("%f", &n3);

    if ((n1>n2)&&(n2>n3)) {
        media=((n1+n2)/2);
        printf("\n A media ehh %.1f ", media);
    } else if ((n1<n2)&&(n3>n2)) {
        media=((n2+n3)/2);
        printf("\n A mediah ehh %.1f ", media); 
    } else if ((n1>n2)&&(n2<n3)) {
        media =((n1+n3)/2); 
        printf("\n A media ehh %.1f ", media); 
    }




}