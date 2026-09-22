#include <stdio.h>

int main(){
    double fatura,fatura_marco,fatura_abril;

    scanf("%lf", &fatura);

    fatura_marco = fatura / 2;
    fatura_abril = fatura_marco * 0.065 + fatura_marco;

    printf("Valor total da fatura  %.2lf \n Valor a pagar em Marco: %.2lf \n Valor a pagar em Abril : %.2lf \n", fatura, fatura_marco, fatura_abril);

    return 0;


}
