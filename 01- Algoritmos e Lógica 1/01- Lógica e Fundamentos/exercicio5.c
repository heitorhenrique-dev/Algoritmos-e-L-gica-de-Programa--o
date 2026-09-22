#include <stdio.h>

int main(){
    int a,b,c,n,t;

    scanf("%d %d %d %d", &a, &b, &c, &n);

    t = (a + b + c + n);

    printf("Candidato A: %1.f%%\n",((float)a/t)*100);
    printf("Candidato B: %1.f%%\n",((float)b/t)*100);
    printf("Candidato C: %1.f%%\n",((float)c/t)*100);
    printf("Nulos : %1.f%%\n", ((float)n/t)*100);

    return 0;
    
}