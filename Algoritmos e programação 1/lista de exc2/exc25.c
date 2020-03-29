#include <stdio.h>
#include <math.h>

int main () {

    int h1, h2, m1, m2;

    printf("\n Informe a idade do primeiro homem: ");
    scanf("%d", &h1);
    printf("\n Informe a idade do segundo homem: ");
    scanf("%d", &h2);
    printf("\n Informe a idade da primeira mulher: ");
    scanf("%d", &m1);
    printf("\n Informe a idade da segunda mulher: ");
    scanf("%d", &m2);

    if ((h1>h2)&&(m1<m2)){
        printf ("\n Homem mais velho + mulher mais nova: %d " , h1+m1);
        printf ("\n Homem mais novo * mulher mais velha: %d " , h2*m2); 
        
    } else if ((h1>h2)&&(m1>m2)) {
         printf ("\n Homem mais velho + mulher mais nova: %d " , h1+m2);
         printf ("\n Homem mais novo * mulher mais velha: %d " , h2*m1); 
    } else if  ((h1<h2)&&(m1<m2)) {
        printf ("\n Homem mais velho + mulher mais nova: %d " , h2+m2);
        printf ("\n Homem mais novo * mulher mais velha: %d " , h1*m1); 
    } else if ((h1<h2)&&(m1>m2)) {
         printf ("\n Homem mais velho + mulher mais nova: %d " , h2+m1);
         printf ("\n Homem mais novo * mulher mais velha: %d " , h1*m2); 
}
}

