#include<stdio.h>

int call = -1;

int fib(int);

int main(){
    int N, A, fibo;
    scanf("%i", &N);
    for(N; N > 0; N--){
        scanf("%i", &A);
        fibo = fib(A);
        printf("fib(%i) = %i calls = %i\n", A, call, fibo);
        call = -1;
    }
    return 0;
}

int fib(int a){
    int fibo;
    if(a == 0 || a == 1){
        fibo = a;
    }else{
        fibo = fib(a-1) + fib(a-2);
    }
    call++;
    return fibo;
}
