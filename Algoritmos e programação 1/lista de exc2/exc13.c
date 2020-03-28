#include<stdio.h>
#include<math.h>
#define precomaca 1.50
#define precodesconto 1.30

int main () {

    float macas, total;
    

    printf("\n Informe o numero de macas : ");
    scanf("%f", &macas);

    if (macas >=12 ) {
        total=(macas*precodesconto);
        printf("\n O valor ehh R$ %.2f ", total); 
    }
    if (macas<12) {
        total=(macas*precomaca);
        printf("\n o valor ehh R$ %2.f ", total);
    }
    


}