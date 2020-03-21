#include <stdio.h>
#include<math.h>

int main () {
    float nota1, nota2, media;

    printf("\n Informe a nota 1 do aluno ?");
    scanf("%f", &nota1);
    printf("\n Informe a nota 2 ? ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;

    if (media>=7) {
        printf("\n Parabens voce foi aprovado sua media foi %2.f !!!", media);

    } else
    {
        printf ("\n Voce pegou recuperacao mas nao desista sua media foi %2.f !!!!", media );
    }
    

    



}