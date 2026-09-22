#include <stdio.h>

int main(){

    int mes, ano;

    scanf("%d %d", &mes, &ano);

    if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0)){
        printf("29 dias\n");
    }
    else{
        printf("28 dias\n");
    }

    if ((mes == 4)|| (mes == 6) || (mes == 9) || (mes == 11)){
        printf("30 dias\n");
    }
    else{
        printf("31 dias\n");
    }



}            