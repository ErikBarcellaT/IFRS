#include<stdio.h>
#include<math.h>

int main () {

    float n1,n2,n3,media;
    printf("\n Informe as 3 notas do aluno: ");
    scanf("%f,%f,%f", &n1,&n2,&n3); 
    media=((n1+n2+n3)/3);

    printf("\n a media foi %.1f ", media); 
    
    if (media>=9) {
        printf("\n nota A");
    } else if (media >=7.5 && media<9) {
        printf("\n nota B");
    } else if (media >=6 && media <7.5) {
        printf("\n nota C");
    } else if (media <6) {
        printf("\n nota D"); 
    }


}