#include<stdio.h>
#include<math.h>

int main () {
    int dist, velmedia, tempo;
    tempo=0;
    dist=0;
    velmedia=0;
    
    printf("\n informe a distancia:  \n informe a velocidade media: \n");
    scanf("%d, %d", &dist, &velmedia);
    tempo= (dist/velmedia)*60;
    
    printf("o tempo foi %d, minutos", tempo);

}

