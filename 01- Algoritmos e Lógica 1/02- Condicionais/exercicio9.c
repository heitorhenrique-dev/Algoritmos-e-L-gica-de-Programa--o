#include <stdio.h>

int main(){
    int anoInicial, anoFinal,i, found = 0;

    scanf("%d%d", &anoInicial, &anoFinal);

    for(i = anoInicial; i <= anoFinal; i++){
        if(i % 4 == 0){
            if(i % 100 != 0){
                printf("%d\n", i);
                found = 1;
            }
            else if(i % 400 == 0){
                printf("%d\n", i);
                found = 1;
            }

        }
        if(found == 0){
            printf("-1\n");
        }

    }

    return 0;
}