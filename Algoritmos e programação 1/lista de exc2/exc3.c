#include<stdio.h>
#include<math.h>

int main() {

    int base, altura, perimetro, area;

    printf("Vamos calcular a area e o perimetro de um retangulo\n");
    printf("Informe a base\n");
    scanf("%d",&base);
    printf("Informe a altura\n");
    scanf("%d",&altura);
    perimetro=(base+altura);
    area=(altura*base);

    printf("O seu perimetro eh %d\n", perimetro );
    printf("A sua area eh %d\n", area);
    //printf("O seu perimetro é %d=%d+%d", perimetro, base , altura)


}
