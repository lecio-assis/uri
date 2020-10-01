#include<stdio.h>

int main(){
    int i, X;
    scanf("%d", &X);
    for(i = 1; i <= X; i+=2){
        printf("%i\n", i);
    }
    return 0;
}
