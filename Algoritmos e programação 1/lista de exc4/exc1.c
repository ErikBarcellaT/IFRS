#include <stdio.h>
#include <math.h>


int main () {
 

      int n,i,soma;  

  printf("\n Digite o valor de n: ");
  scanf("%d", &n);
  
  soma = 0;
  i = 1;
  
  while (i <= n) {
    soma = soma + i;
    i = i + 1;
  }
  
  
  printf("A soma dos %d primeiros inteiros positivos eh  %d \n", n, soma);
  
  return 0;


}