#include <stdio.h>

int main(){
    int n1,n2,n3,average;

    printf("Digite a 3 notas :\n");

    scanf("%d %d %d", &n1,&n2,&n3);
    average =(n1+n2+n3)/3;

    if (average >=70 && average <=100){
        printf("APROVADO \n");
    }
    else if (average >= 0 && average <= 40){
            printf("REPROVADO \n");
        }
    
    else if (average > 40 && average <70){
            printf("FINAL\n");
        }
    
    else {
        printf("MEDIA INVALIDA\n");
    }
    return 0;

}