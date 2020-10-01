#include<stdio.h>

int main(){
    double vetor[6], media = 0;
    int i = 0, pos = 0;
    for(i = 0; i < 6; i++){
        scanf("%lf", &vetor[i]);
    }
    for(i = 0; i < 6; i++){
        if(vetor[i] > 0){
            pos++;
            media += vetor[i];
        }
    }
    media = media/pos;
    printf("%i valores positivos\n%.1lf\n", pos, media);
    return 0;
}
