#include<stdio.h>

int main(){
    int h0, h1, m0, m1, ht, mt = 0;
    scanf("%i %i %i %i", &h0, &m0, &h1, &m1);

    ht = h1 - h0;
    mt = m1 - m0;
    
    if(ht <= 0){
        ht += 24;
    }
    if(mt < 0){
        mt += 60, ht--;
    }
    if(ht == 24 && mt != 0){
        ht = h1 - h0;
    }

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
    return 0;
}
