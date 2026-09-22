#include <stdio.h>

int main(){
    int n,i,j,aux,v[1000],menor;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
        }

        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
        }
    printf("[%d]", v[i]);

    }

return 0;
}