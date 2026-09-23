#include <stdio.h>
int main(){

    int hora_inicial,minuto_inicial,hora_final,minuto_final;
    int horas,minutos;
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final,&minuto_final);
    
    horas = (hora_final - hora_inicial); 
    minutos = (minuto_final - minuto_inicial);

    
    if ((horas >= 0 && horas <=24) && ( minutos >=1 && minutos <= 1440)){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",horas, minutos);
    }
    else{
        printf("ERRO\n");
    }
    return 0;

}