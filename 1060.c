#include<stdio.h>

int main(){
    double vetor[6];
    int i = 0, control = 0;
    for(i = 0; i < 6; i++){
        scanf("%lf", &vetor[i]);
    }
    for(i = 0; i < 6; i++){
        if(vetor[i] > 0){
            control++;
        }
    }
    printf("%i valores positivos\n", control);
    return 0;
}
