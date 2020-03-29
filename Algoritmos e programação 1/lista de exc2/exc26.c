#include<stdio.h>
#include<math.h>
#define moeda1real 1.0
#define moeda50 0.50
#define moeda25 0.25
#define moeda10 0.10
#define moeda5 0.05
int main () {

    float precomercadoria , totalcofre;
    int umreal, cinquentacents, vintecincocents, dezcents, cincocents;
    printf("\n Informe o preco da mercadoria desejada: ");
    scanf("%f", &precomercadoria);
    printf("\n Informe a quantidade de moedas de um real no cofre: ");
    scanf("%d", &umreal);
    printf("\n Informe a quantidade de moedas de 50 centavos no cofre: ");
    scanf("%d", &cinquentacents);
    printf("\n Informe a quantidade de moedas de 25 centavos no cofre: ");
    scanf("%d", &vintecincocents);
    printf("\n Informe a quantidade de moedas de 10 centavos no cofre: ");
    scanf("%d", &dezcents);
    printf("\n Informe a quantidade de moedas de 05 centavos no cofre: ");
    scanf("%d", &cincocents);

    totalcofre=((umreal*moeda1real)+(cinquentacents*moeda50)+(vintecincocents*moeda25)+(dezcents*moeda10)+(cincocents*moeda5));

    printf("\n voce tem R$ %.2f ", totalcofre);
    if(totalcofre>= precomercadoria){
        printf("\n O DINHEIRO EHH SUFICIENTE ");  
    } else if (totalcofre<precomercadoria)
    {
        printf("\n O DINHEIRO NAO EH SUFICIENTE "); 
    }
    
}