#include <stdio.h>
 
int main() {
    int num, horas;
    double valor, salario;
    scanf("%i %i %lf", &num, &horas, &valor);
    salario = horas * valor;
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", num, salario);
    return 0;
}
