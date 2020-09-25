#include <stdio.h>

int ida(int m);

int main(){
    int N, M, P; // N = idas    M = prod disponíveis    P = comprados
    scanf("%i", &N);
    for (N; N > 0; N--){
        scanf("%d", &M);
        ida(M);
    }
    return 0;
}

int ida(int m){
    double preco, total = 0;
    char prod[50];
    for (m; m > 1; m--){
        scanf("%s %lf", &prod[0], &preco);
        total = total + preco;
    }
    printf("R$ %.2lf", total);
    return 0;
}
