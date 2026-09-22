#include <stdio.h>

int main(){
    int n1,hora,minuto,segundo;

    scanf("%d", &n1);

    hora = (n1/3600);
    minuto = (n1 % 3600)/60;
    segundo = (n1 % 3600) % 60;
    
    printf("%d h %d m %d s",hora,minuto,segundo);    
    
    return 0;
   
}