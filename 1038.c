#include <stdio.h>

int main(){
    int cod, qtd;
    double valor, preco[5] = {4.0 , 4.5, 5.0, 2.0, 1.5};
    scanf("%i %i", &cod, &qtd);
    valor = preco[cod-1] * qtd;
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}
