#include <stdio.h>

int main(){
    int D;
    double C;
    scanf("%i %lf", &D, &C);
    printf("%.3lf km/l\n", D/C);
    return 0;
}
