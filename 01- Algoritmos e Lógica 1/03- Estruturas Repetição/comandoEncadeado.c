#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for( j = 0; j < i; j++){
            if(j > 0){
                
            printf("-");
            printf("%d", i);
            
            
            }
        }
        printf("\n");
    }
	return 0;
}