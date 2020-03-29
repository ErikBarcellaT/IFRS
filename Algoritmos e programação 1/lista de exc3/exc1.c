#include<stdio.h>
#include<math.h>

int main () {
     
     int num;

     printf("\n Informe o numero: ");
     scanf("%d", &num);

     if (num==0) {
     printf("\n o numero ehh 0"); 
     }else if (num>0) {
          printf("\n o numero eh positivo ");
     }else if (num<0) {
          printf("\n o numero eh negativo");
     }




}