#include <stdio.h>
int main() {
    int num;
    printf("Digite um numero :\n");

    scanf("%d", &num);

    if (num % 8 == 0){
        printf("Esse numero eh multiplo\n");
    }
    else {
        printf("Esse numero nao eh multiplo\n");
    }
    return 0;

}