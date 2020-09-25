#include <stdio.h>

int main(){
    int t, v;
    double c;
    scanf("%i %i", &t, &v);
    c = (double)v*t/12;
    printf("%.3lf\n", c);
    return 0;
}
