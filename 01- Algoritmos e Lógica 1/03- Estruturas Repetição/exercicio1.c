#include <stdio.h>

int main(){
    int n,i,i_quadrado,i_cubo;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        i_quadrado = i * i;
        i_cubo = i * i * i;
        printf("%d %d %d\n", i, i_quadrado, i_cubo);
        printf("%d %d %d\n", i, i_quadrado + 1, i_cubo + 1);
    }
    return 0;
}