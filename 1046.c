#include <stdio.h>

int main(){
    int t0, t1, tt;
    scanf("%i %i", &t0, &t1);
    if(t0 > t1){
        tt = 24 + t1 - t0;
    }else if(t0 < t1){
        tt = t1 - t0;   
    }else if(t0 == t1){
        tt = 24;
    }
    printf("O JOGO DUROU %i HORA(S)\n", tt);
    return 0;
}
