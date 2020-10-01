#include <stdio.h>

int main(){
    int d0, d1, h0, h1, m0, m1, s0, s1, dt, ht, mt, st;
    scanf("Dia %i\n", &d0);
    scanf("%d : %d : %d\n", &h0, &m0, &s0);
    scanf("Dia %i\n", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    
    dt = d1 - d0;
    ht = h1 - h0;
    mt = m1 - m0;
    st = s1 - s0;

    if(ht <= 0){
        ht += 24, dt--;
    }
    if(mt <= 0){
        mt += 60, ht--;
    }
    if(st <= 0){
        st += 60, mt--;
    }
    if(st == 60){
        st = 0, mt++;
    }
    if(mt == 60){
        mt = 0, ht++;
    }
    if(ht == 24){
        ht = 0, dt++;
    }

    
    printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n", dt, ht, mt, st);
    return 0;
}
