#include <stdio.h>

int main(){

    int n1,n2,n3,n4,n5,menor,posicao;

    scanf("%d\n %d\n %d\n %d\n %d",&n1, &n2, &n3, &n4, &n5);

    menor = n1;
    posicao = 1;

    if (n2 < menor){
        menor = n2;
        posicao = 2;
    }

    if (n3 < menor){
        menor = n3;
        posicao = 3;
    }
    if (n4 < menor){
        menor = n4;
        posicao = 4;
    }
    if (n5 < menor){
        menor = n5;
        posicao = 5;
    }

    printf("Joaozinho escolheu %d, com %d calorias.", posicao, menor);
    
    return 0;

}