#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, delta;
    scanf("%lf %lf %lf", &A, &B, &C);
    delta = pow(B, 2) - 4.0 * A * C;
    if(delta < 0 || A == 0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", (-B + sqrt(delta))/(2.0 * A));
        printf("R2 = %.5lf\n", (-B - sqrt(delta))/(2.0 * A));
    }
    return 0;
}
