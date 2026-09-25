#include <stdio.h>

int main(){
    double note;

    scanf("%lf", &note);

    if(note > 7){
        printf("bolinha verde\n");
    }
    else if(note > 5){
        printf("bolinha amarela\n");
    }
    else{
        printf("bolinha vermelha");
    }

    return 0;
  
}