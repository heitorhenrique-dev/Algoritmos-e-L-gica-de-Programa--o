#include <stdio.h>
#include <math.h>

int main(){
    int x;
    double y;
    
    scanf("%d", &x);

    y = 3*pow(x, 3) - 2*pow(x,2) + 3*x -1;

    printf("Y = %.2lf\n", y);
    
    return 0;

}