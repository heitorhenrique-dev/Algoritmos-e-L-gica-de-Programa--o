#include <stdio.h>

int main(){

    int mes, ano;

    printf("Digite o mes\n");
    printf("Digite o ano:\n");

    scanf("%d %d", &mes, &ano);


    if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0)){
                printf("29 dias\n");
    }
    else{
        printf("28 dias\n")
    }

    switch (mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31 dias\n"); break;
        case 4:
        case 6:
        case 9:
        case 11:printf("30 dias"); break;
        default: printf("ERRO\n");
    }
    
    return 0;

}