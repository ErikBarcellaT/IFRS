#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {

int anos, meses, dias, atehoje;

anos= 0; 
meses= 0;
dias=0; 
printf("\n Informe a idade em anos / meses / dias: ");
scanf("%d, %d , %d", &anos, &meses, &dias );
anos = anos *365;
meses= meses*30;
atehoje= (anos+meses+dias);
 
 printf("\n ate hoje a pessoa ja viveu %d dias ", atehoje);


  system("pause");  
}