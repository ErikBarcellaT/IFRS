#include<stdio.h>
#include<math.h>

int main () {
    int numero_lados;
    float cm;

    printf("\n informe o numero de lados: ");
    scanf("%d", &numero_lados);
    printf("\n informe o valor dos lados em cm: ");
    scanf("%f", &cm);

    switch (numero_lados)
    {
    case 3:
        printf("\n TRIANGULO, Perimetro: %.1f ", cm*3); 
        break;
    case 4: 
        printf("\n QUADRADO , Area: %.1f ", cm*cm);
        break;
    case 5:
        printf("\n PENTAGONO "); 
    default : 
        printf("\n numeros de lados invalidos"); 
        break;
    }
}