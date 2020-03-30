#include<stdio.h>
#include<math.h>


int main () {
    int gol1, gol2; 
    char time1 [61], time2 [61]; 

    printf("\n informe o nome de um time: ");
    scanf("%s", &time1); 
    printf("\n informe o nome do outro time: ");
    scanf("%s", &time2); 
    printf("\n informe quantos gols foi feito pelo time %s :", time1); 
    scanf("%d", &gol1); 
    printf("\n e agora quantos foram feitos pelo time %s :", time2); 
    scanf("%d", &time2); 

    if (gol1>gol2) {
        printf("\n o time %s  venceu a partida ", time1);
    } else if (gol1<gol2) {
        printf("\n o tim e%s venceu a partida   ", time2);
    } else if (gol1==gol2) {
        printf("\n O jogo terminou empatado "); 
    }

} 