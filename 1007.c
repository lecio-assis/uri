#include <stdio.h>
 
int main() {
    int A, B, C, D, DIF;
    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIF = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIF);
    return 0;
}
