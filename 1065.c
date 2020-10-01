#include<stdio.h>

int main(){
    int i = 0, par = 0, vetor[5];
    for(i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            par++;
        }
    }
    printf("%i valores pares\n", par);
    return 0;
}
