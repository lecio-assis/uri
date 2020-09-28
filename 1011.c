#include <stdio.h>
#include <math.h>

int main(){
    double r, vol;
    scanf("%lf", &r);
    vol = 3.14159 * (4.0/3) * pow(r, 3);
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}
