#include <stdio.h>
#include<math.h>

int main () {

int a1, a2, media ; 

printf("\n Informe o resultado da nota 1 : ");
scanf("%d", &a1);
printf("\n informe o resultado da nota 2: ");
scanf("%d ", &a2); 
media = (a1+a2)/2;
if (media>=6.0) {
    printf("\n o aluno foi aprovado ");
} 
if (media < 6.0) {
    printf("\n o aluno foi reprovado"); 
}



}