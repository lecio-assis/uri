#include <stdio.h>

int main(){
	int a, b, c, M;
	scanf("%i %i %i", &a, &b, &c);
	M = (a+b+abs(a-b))/2.0;
	M = (c+M+abs(c-M))/2.0;
	printf("%i eh o maior\n", M);
	return 0;
}
