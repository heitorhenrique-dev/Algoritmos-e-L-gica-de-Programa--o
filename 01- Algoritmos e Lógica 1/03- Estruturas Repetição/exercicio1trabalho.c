#include <stdio.h>
#include <math.h>

int main(){

    /*coordenadas*/
    double x,y,a,b,c,d,dist1,dist2;

    /*custos*/
    double custoTot1,custoTot2,orcamento,custoGas1,custoPed1,custoGas2,custoPed2,total;

    scanf("%lf", &orcamento);
    scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&a,&b,&c,&d);
    scanf("%lf %lf",&custoGas1, &custoPed1);
    scanf("%lf %lf",&custoGas2, &custoPed2);

    dist1 =sqrt(pow(x - a,2) + pow(y - b, 2));

    dist2 =sqrt (pow(x - c,2) + pow(y - d, 2));
    custoTot1 = (2 * dist1) / 12 * custoGas1 + custoPed1;
    custoTot2 = ( 2 * dist2) / 12 * custoGas2 + custoPed2;


    if(orcamento >= (custoTot1 + custoTot2)){
        printf("Ele vai visitar os dois lugares\n");
        total = custoTot1 + custoTot2;
    }
    else if (orcamento >= custoTot1 && orcamento >= custoTot2 && custoTot1 == custoTot2){
        printf("Tanto faz\n");
        total = custoTot1;
    }
    else if (orcamento >= custoTot1 && orcamento >= custoTot2 && custoTot1 < custoTot2){
        printf("Ele vai para o destino 1\n");
        total = custoTot1;
    }
    else if (orcamento >= custoTot1 && orcamento >= custoTot2 && custoTot1 > custoTot2){
        printf("Ele vai para o destino 2\n");
        total = custoTot2;
    }
    else{
        printf("Ele vai ficar em casa\n");
        printf("-1.00\n");
    }
    printf("%.2lf", total);

    return 0;
}