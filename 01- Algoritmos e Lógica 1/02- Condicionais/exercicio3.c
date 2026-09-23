#include <stdio.h>
int main(){
    char conceito;
    int livros,alunos;
    
    scanf("%d %d", &livros, &alunos);

    float media = ((float)alunos / livros);

    if (media <= 8){
        conceito = 'A';
    }
    else if (media <=12){
        conceito = 'B';
    }
    else if (media <=18){
        conceito = 'C';
    }
    else{
        conceito = 'D';
    }
    printf("%c\n",conceito);

    return 0;
}