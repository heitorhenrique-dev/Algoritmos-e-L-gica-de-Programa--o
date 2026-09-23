#include <stdio.h>

int main(){
    int dias, distancia;
    double valor_total;

    scanf("%d %d", &dias, &distancia);

    if (distancia > 100){
        valor_total = (dias * 90) + (distancia - 100) * 12;
    }
    else {
        valor_total = (dias * 90);
    }
    printf("%.2lf", valor_total);
    return 0;

}