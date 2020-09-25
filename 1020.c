#include <stdio.h>

int main(){
    int I, a, m, d;
    scanf("%i", &I);
    a = I/365;
    m = (I-a*365)/30;
    d = (I-a*365-m*30);
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", a, m, d);
    return 0;
}
