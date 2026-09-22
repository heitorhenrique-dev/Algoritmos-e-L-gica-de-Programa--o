#include <stdio.h>

int main(){
    int mes;

    scanf("%d", &mes);

    switch (mes){
        case 1: printf("Janeiro\n");
        break;
        case 2 : printf("Fevereiro\n");
        break;
        case 3: printf("Marco\n");
        break;
        case 4: printf("Abril\n");
        break;

        default: printf("ERRO\n");

        break;
    }
    return 0;

}