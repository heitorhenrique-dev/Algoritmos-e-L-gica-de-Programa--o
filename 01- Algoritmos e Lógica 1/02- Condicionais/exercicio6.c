#include <stdio.h>
int main(){
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    int t1 = ( a2 * 2 + a3 * 4);
    int t2 = (a1 * 2 + a3 * 2);
    int t3 = (a1 * 4 + a2 * 2);
    int menor = t1;

    if (t2 < menor){
        menor = t2;
    }
    if (t3 < menor){
        menor = t3;
    }

    printf("%d\n", menor);

    return 0;
}