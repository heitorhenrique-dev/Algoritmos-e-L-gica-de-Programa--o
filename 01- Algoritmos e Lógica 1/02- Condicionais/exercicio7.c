#include <stdio.h>
int main(){
    int idade,sintoma;
    float temperatura;

    scanf("%d %f %d", &idade, &temperatura, &sintoma);

    if (sintoma == 3){
        printf("Alto\n");
    }
    else if (idade > 60 || temperatura > 39){
        printf("Alto\n");
    }
    else if (sintoma == 0){
        printf("Baixo\n");
    }
    else if (idade < 12 && temperatura < 37.5){
        printf("Baixo\n");
    }
    else if (sintoma == 2){
        printf("Medio");
    }
    else if (idade >= 12 && idade <= 60 && temperatura >= 37.5 && temperatura <= 39){
        printf("Medio\n");
    }
    else{
        printf("Medio\n");
    }
    return 0;

}