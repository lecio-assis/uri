#include <stdio.h>
#include <math.h>

int main(void){
    double A = 0.0, B = 0.0, C = 0.0;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", A*C/2);
    printf("CIRCULO: %.3lf\n", pow(C, 2)*3.14159);
    printf("TRAPEZIO: %.3lf\n", ((A+B)*C)/2);
    printf("QUADRADO %.3lf\n", B*B);
    printf("RETANGULO: %.3lf\n", A*B);
    return 0;
}
