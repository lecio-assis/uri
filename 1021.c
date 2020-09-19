#include <stdio.h>
 
int main() {
    double N = 0.0;
    int dinheiro[2][6] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}};
    char *notas[] = {"100.00", "50.00", "20.00", "10.00", "5.00", "2.00"};
    char *moedas[] = {"1.00", "0.50", "0.25", "0.10", "0.05", "0.01"};
    int i = 0;
    scanf("%lf", &N);
    while(N >= 100){
        dinheiro[0][0]++;
        N = N - 100.00;
    }
    while(N >= 50){
        dinheiro[0][1]++;
        N = N - 50.0;
    }
    while(N >= 20){
        dinheiro[0][2]++;
        N = N - 20.0;
    }
    while(N >= 10){
        dinheiro[0][3]++;
        N = N - 10.0;
    }
    while(N >= 5){
        dinheiro[0][4]++;
        N = N - 5.0;
    }
    while(N >= 2){
        dinheiro[0][5]++;
        N = N - 2.0;
    }
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++){
        printf("%d nota(s) de R$ %s\n", dinheiro[0][i], notas[i]);
    }

        while(N >= 1){
        dinheiro[1][0]++;
        N = N - 1.00;
    }
    while(N >= 0.50){
        dinheiro[1][1]++;
        N = N - 0.50;
    }
    while(N >= 0.25){
        dinheiro[1][2]++;
        N = N - 0.25;
    }
    while(N >= 0.10){
        dinheiro[1][3]++;
        N = N - 0.10;
    }
    while(N >= 0.05){
        dinheiro[1][4]++;
        N = N - 0.05;
    }
    while(N >= (float)0.01){
        dinheiro[1][5]++;
        N = N - 0.01;
    }
    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++){
        printf("%d moeda(s) de R$ %s\n", dinheiro[1][i], moedas[i]);
    }

    return 0;
}
