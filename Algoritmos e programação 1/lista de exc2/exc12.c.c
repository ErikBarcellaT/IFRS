#include <stdio.h>
#include<math.h>

int main () {

    int n1, n2 , adicao;

    printf("\n Informe o valor do numero 1 : ");
    scanf("%d", &n1);
    printf("\n Informe o valor do numero 2: ");
    scanf("%d ", &n2);
    adicao=(n1+n2);
    printf("o resultado ehh %d ", adicao );
    if ( adicao > 20 ) {
        adicao=(adicao + 8);
        printf ("\n O seu resultado eh %d ", adicao );
        }
    if (adicao <=20 ){
        adicao = (adicao - 10);
        printf("\n O seu resutado eh %d ", adicao );


        }


}

