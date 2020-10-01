#include<stdio.h>

int main(){
    int i = 0, par = 0, pos = 0, zeros = 0, vetor[5];
    for(i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            par++;
        }
        if(vetor[i] > 0){
            pos++;
        }else if(vetor[i] == 0){
            zeros++;
        }
    }
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, (5-par), pos, (5-pos-zeros));
    return 0;
}
