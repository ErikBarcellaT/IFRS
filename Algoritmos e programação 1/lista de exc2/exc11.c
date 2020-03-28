#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main () {

int nadador; 

printf("\n informe a idade do nadador: ");
scanf("%d ", &nadador);

if (nadador >= 18) {
    printf("Categoria adulta \n ");
} else 
    if((nadador>=14) && (nadador<18)){
    printf("categoria juvenil \n ");
} else 
    if((nadador>=9)&&(nadador<14)){
    printf("categoria infantil \n ");
} else 
    if(nadador<9){
    printf("categoria mirim\n");
}


system("pause");
}