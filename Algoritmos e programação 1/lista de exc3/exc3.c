#include<stdio.h>
#include<math.h>

int main() {

    int n1,n2,n3; 

    printf("\n informe o valor do primeiro numero: ");
    scanf("%d", &n1);
    printf("\n informe o valor do segundo numero: ");
    scanf("%d", &n2);
    printf("\n informe o valor do terceiro numero: ");
    scanf("%d", &n3);

    if ((n1>n2)&&(n2>n3)){
        printf("\n a soma dos dois maiores ehh %d ", n1+n2);
} else if ((n1>n2)&&(n2<n3)) {
    printf("\n a soma dos dois maiores eh %d ", n1+n3); 
} else if ((n1<n2)&&(n2<n3)) {
    printf("\n a soma dos dois maiores eh %d ", n2+n3); 
}

}