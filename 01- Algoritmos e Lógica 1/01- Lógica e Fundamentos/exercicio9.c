#include <stdio.h>

int main(){
    double a,b,c,d,chance;
    int opa,opb,opc,opd;

    scanf("%d %d",&opa, &opb);
    scanf("%d %d",&opc, &opd);


    a = 0;
    b = 0;
    c = 0;
    d = 0;

    /*dia do filme*/
    if (opa == 1){
        a -= 0.413;
    }
    else if (opa == 2){
        a += 0.404;
    }

    /*genero do filme*/

    switch (opb){
        case 1 : b += 0.274; break;
        case 2 : b -= 0.105; break;
        case 3 : b += 0.197; break;
    }
    /*horario do filme*/

    switch (opc){
        case 1 : c -= 0.228; break;
        case 2 : c += 0.114; break;
        case 3: c += 0.386; break;
    }

    switch (opd){
        case 1: d += 0.023; break;
        case 2: d += 0.023 * 2; break;
        case 3: d += 0.023 * 3; break;
        case 4: d += 0.023 * 4; break;
        case 5: d += 0.023 * 5; break;
        case 6: d += 0.023 * 6; break;
        case 7: d += 0.023 * 7; break;
        case 8: d += 0.023 * 8; break;
        case 9: d += 0.023 * 9; break;
        case 10: d += 0.023 * 10; break;
    }
    chance = a + b + c + d;

    if (chance <= 0.40){
        printf("Melhor nao tentar\n");
    }
    else if (chance > 0.40 && chance <= 0.80){
        printf("Chances boas, pode convidar\n");
    }
    else {
        printf("Provavelmente vao aceitar\n");
    }

    return 0;
}