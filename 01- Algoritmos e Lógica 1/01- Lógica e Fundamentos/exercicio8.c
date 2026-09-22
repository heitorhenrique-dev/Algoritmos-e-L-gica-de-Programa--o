#include <stdio.h>

int main(){
    int a, b;
    double average1, average2,resultado;

    scanf("%d%d", &a, &b);

    average1 = (a + b)/2;
    average2 = (average1 + a)/2;
    resultado = (average2 + a )/2;

    printf("%.2lf", resultado);

    return 0;
}