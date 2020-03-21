#include<stdio.h>
#include<math.h>

int main () {      
    float h, m, c, qntdcarnehomens, qntdcarnemulher , qntdcarnecrianca,consumohomem, consumomulher, consumocrianca;
    
    h=(0);
    m=(0);
    c=(0);
    qntdcarnehomens=(0.400);
    qntdcarnemulher=(0.320);
    qntdcarnecrianca=(0.200);
    printf("\n Vamos la caclular a quantidade necessaria de carne para compras,\n\n pra isso informe a quantidade de pessosas abaixo conforme categoria\n\n ");
    printf("\n Informe o numero de homens ?");
    scanf("%f",&h);
    printf("\n Informe o numero de mulheres?");
    scanf("%f", &m);
    printf("\n informe o numero de criancas?");
    scanf("%f", &c);
    consumohomem=(qntdcarnehomens*h);
    qntdcarnehomens=consumohomem*20/100;
    consumohomem=consumohomem+qntdcarnehomens;

    consumomulher=(qntdcarnemulher*m);
    qntdcarnemulher=(consumomulher*20/100);
    consumomulher=consumomulher+qntdcarnemulher;

    consumocrianca=(qntdcarnecrianca*c);
    qntdcarnecrianca=consumocrianca*20/100;
    consumocrianca=consumocrianca+qntdcarnecrianca;
    
    

  
    printf("\n HOMENS = %.2f KILOS \n MULHERES= %.2f KILOS \n CRIANCAS = %.2f KILOS ", consumohomem, consumomulher, consumocrianca);



    return(0);
    




    






}