#include <stdio.h>
 
int main() {
    int N = 0;
    int dinheiro[7] = {0, 0, 0, 0, 0, 0, 0};
    char *notas[] = {"100,00", "50,00", "20,00", "10,00", "5,00", "2,00", "1,00"};    int i = 0;
    
    scanf("%i", &N);
    printf("%i\n", N);

    while(N >= 100){
        dinheiro[0]++;
        N = N - 100.00;
    }
    while(N >= 50){
        dinheiro[1]++;
        N = N - 50.0;
    }
    while(N >= 20){
        dinheiro[2]++;
        N = N - 20.0;
    }
    while(N >= 10){
        dinheiro[3]++;
        N = N - 10.0;
    }
    while(N >= 5){
        dinheiro[4]++;
        N = N - 5.0;
    }
    while(N >= 2){
        dinheiro[5]++;
        N = N - 2.0;
    }
    while(N >= 1){
        dinheiro[6]++;
        N = N - 1.00;
    }

    for(i = 0; i < 7; i++){
        printf("%d nota(s) de R$ %s\n", dinheiro[i], notas[i]);
    }
    return 0;
}
