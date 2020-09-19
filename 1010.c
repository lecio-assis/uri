#include <stdio.h>
 
int main() {
    int cod1, cod2, num1, num2;
    double valor1, valor2, pag;
    scanf("%i %i %lf %i %i %lf", &cod1, &num1, &valor1,
    &cod2, &num2, &valor2);
    pag = num1*valor1 + num2*valor2;
    printf("VALOR A PAGAR: R$ %.2lf\n", pag);
    return 0;
}
