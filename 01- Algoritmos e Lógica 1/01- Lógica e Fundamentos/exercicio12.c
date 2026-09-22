#include <stdio.h>

int main(){
    int n, valor;

    scanf("%d", &n);

    if (n >= 0 && n <= 10){
        printf("7 reais\n");
    }
    else if (n > 10 && n <= 30){
        valor = n * 1;
        printf("%d reais", valor);    
    }
    else if (n >= 31 && n <= 100){
        valor = n * 2;
        printf("%d reais", valor);
    }
    else if (n > 101 && n <= 1000){
        valor = (n - 100) * 5 + 167;
        printf("%d reais", valor);
    }
    else {
        printf("VALOR INVALIDO\n");
    }

    return 0;
}